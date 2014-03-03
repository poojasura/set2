#include<iostream.h>
#include<conio.h>
class node
{
friend class cll;
int data;
node *link;
};
class cll
{
int len;
node *head,*tail;
public:
cll();
void insert(int x);
void insertpos(int pos,int x);
void display();
};
void cll::cll()
{
len=0;
head=NULL;
tail=NULL;
}
void cll:: insert(int x)
{
node *temp,*p;
temp=new node();
temp->data=x;
if(head==NULL)
{
head=temp;
temp->link=NULL;
tail=temp;
len++;
}
else
{
for(p=head;p!=tail;p=p->link);
p->link=temp;
temp->link=head;
tail=temp;
len++;
}
}
void cll::display()
{
node *current;
for(current=head;current!=tail;current=current->link)
cout<<current->data<<"->";
cout<<current->data;
}
void cll ::insertpos(int pos,int x)
{
node *y ,*temp;
temp=head;
y = new node();
y->data=x;
if(pos==1)
{
y->link=head;
head=y;
}
else
{
for(int i=1;i<(pos-1);i++)
temp=temp->link;
y->link=temp->link;
temp->link=y;
if(pos==(len+1))
tail=y;
}
}
void main()
{
clrscr();
cll l;
l.insert(1);
l.insert(2);
l.insert(3);
l.insert(4);
l.insertpos(3,6);
l.insertpos(5,5);
l.insertpos(1,7);
l.display();
}
