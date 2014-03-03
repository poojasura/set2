#include<iostream.h>
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
void convert();
void display();
void displayc();
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
void ll:: convert()
{
node *p;
if(first!=NULL)
{
for(p=first;p->link!=NULL;p=p->link);
p->link=first;
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
cout<<"\n";
}
void ll :: displayc()
{
node *current;
if(first!=NULL)
{
cout<<first->data<<"->";
for(current=first->link;current!=first;current=current->link)
cout<<current->data<<"->";
}
}
void main()
{
ll l;
l.insert(1);
l.insert(2);
l.insert(3);
l.display();
l.convert();
l.displayc();
}


