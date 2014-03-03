//program to merge to sorted linked list
#include<iostream.h>
#include<conio.h>
class node
{
friend class ll;
public:
int data;
node *link;
};
class ll
{
node *first;
int len;
public:
ll();
void insert(int x);
void merge(ll &l1,ll &l2);
void display();
};
void ll :: ll()
{
first=NULL;
len=0;
}
void ll::insert(int x)
{
node *p, *temp;
temp = new node();
temp->data=x;
if(first==NULL)
{
temp->link=NULL;
first=temp;
len++;
}
else
{
for(p=first;p->link!=NULL;p=p->link) ;
p->link=temp;
temp->link=NULL;
len++;
}
}
void ll :: merge(ll &l1,ll &l2)
{
node *temp;
temp=NULL;

if(l1.first==NULL&&l2.first==NULL)
return;
while(l1.first!=NULL&&l2.first!=NULL)
{

if(l1.first->data<l2.first->data)
{
if(first==NULL)
{
first=l1.first;
l1.first=l1.first->link;
temp=first;
temp->link=NULL;
}
else
{
temp->link= l1.first;
l1.first=l1.first->link;
temp=temp->link;
temp->link=NULL;
}
}
else if(l1.first->data>l2.first->data)
{

if(first==NULL)
{
first=l2.first;
l2.first=l2.first->link;
temp=first;
temp->link=NULL;
}
else
{
temp->link= l2.first;
l2.first=l2.first->link;
temp=temp->link;
temp->link=NULL;
}
}
else
{
temp->link= l2.first;
temp=temp->link;
temp->link=NULL;
l1.first=l1.first->link;
l2.first=l2.first->link;

}
}
while(l1.first!=NULL)
{
temp->link= l1.first;
temp=temp->link;
temp->link=NULL;
l1.first=l1.first->link;
}
while(l2.first!=NULL)
{
temp->link= l2.first;
temp=temp->link;
temp->link=NULL;
l2.first=l2.first->link;
}
 }
void ll :: display()
{
node *current;
if(first!=NULL)
{
for(current=first;current!=NULL;current=current->link)
cout<<current->data<<"->";
}
}
void main()
{
clrscr();
ll l1,l2,l3;
l1.insert(1);
l1.insert(22);
l1.insert(43);
l1.insert(47);
l1.insert(54);
l1.display();
cout<<"\n";
l2.insert(16);
l2.insert(37);
l2.insert(68);
l2.display();
cout<<"\n";
l3.merge(l1,l2);
l3.display();
}


