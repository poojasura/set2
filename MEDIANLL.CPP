//program to display median in the linked list
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
void median();
void display();
void displaym(int x);
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
void ll:: median()
{
cout<<"median :\t";
if((len%2)==0)
{
displaym(len/2);
displaym((len/2)+1);
}
else
displaym((len+1)/2);
}
void ll :: display()
{
node *current;
if(first!=NULL)
{
for(current=first;current!=NULL;current=current->link)
cout<<current->data<<"\t";
}
}
void ll::displaym(int x)
{
node *temp;
temp=first;
for(int i=1;i<x;i++)
temp=temp->link;
cout<<temp->data<<"\t";
}
void main()
{
clrscr();
ll l;
l.insert(1);
l.insert(12);
l.insert(32);
l.insert(44);
l.insert(73);
l.insert(89);
l.display();
l.median();

}


