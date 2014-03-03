//program to delete a node containing value x if present
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
public:
ll();
void insert(int x);
void del(int x);
void display();
};
void ll :: ll()
{
first=NULL;
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
}
else
{
for(p=first;p->link!=NULL;p=p->link) ;
p->link=temp;
temp->link=NULL;
}
}
void ll :: del(int x)
{
node *temp,*next;
if(x==first->data)
{
temp=first;
first=first->link;
delete temp;
}
else
{
for(temp=first,next=first;temp->link!=NULL;temp=temp->link)
{
next=next->link;
if(x==next->data)
{
temp->link=next->link;
delete next;
break;
}
}
}
if(temp->link==NULL)
cout<< x<<" element is not present in the list \n";
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
l.del(4);
l.del(6);
l.display();
}


