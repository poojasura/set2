//program to delete  last n nodes
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
void deln(int x);
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
void ll::deln(int x)
{
if(first==NULL)
cout<<"list is empty";
else if(len==x)
{
node *y;
y=first;
while(y!=NULL)
{
first=first->link;
delete y;
y=first;
}
}
else
{
node *temp,*next;
temp=first;
for(int i=1;i<(len-x+1);i++)
{
next=temp;
temp=temp->link;
}
while(next->link!=NULL)
{
next->link=temp->link;
delete temp;
temp=next->link;
}
}
}
void ll :: display()
{
node *current;
if(first!=NULL)
{
for(current=first;current!=NULL;current=current->link)
cout<<current->data;
}
}
void main()
{
clrscr();
ll l;
l.insert(1);
l.insert(2);
l.insert(3);
l.insert(4);
l.insert(5);
l.deln(3);
l.display();
}


