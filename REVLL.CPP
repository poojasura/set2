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
void rev();
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
void ll :: rev()
{
node  *temp=first;
	node *p=NULL;
	node *r;
	for(;temp!=NULL;first=p)
	{
	 r=p;
	 p=temp;;
	 temp=temp->link;
	 p->link=r;
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
ll l;
l.insert(1);
l.insert(2);
l.insert(3);
l.insert(4);
l.insert(5);
l.display();
cout<<"\n";
l.rev();
l.display();
}


