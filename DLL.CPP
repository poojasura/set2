//program to display middle element in the linked list
#include<iostream.h>
#include<conio.h>
class node
{
friend class dll;
int data;
node *llink,*rlink;
};
class dll
{
node *first,*last;
int len;
public:
dll();
void insert(int x);
void display();
void middle();
};
void dll::dll()
{
len=0;
first=NULL;
last=NULL;
}
void dll:: insert(int x)
{
node *temp,*y;
temp=new node();
temp->data = x;
if(first==NULL)
{
temp->llink=NULL;
temp->rlink=NULL;
first=temp;
last=temp;
len++;
}
else
{
for(y=first;y->rlink!=NULL;y=y->rlink);
y->rlink=temp;
temp->llink=y;
temp->rlink=NULL;
last=temp;
len++;
}
}
void dll:: middle( )
{
cout<<"middle element:";
node *current,*temp;
for(current=first,temp=first;temp!=last;current=current->rlink)
temp=temp->rlink->rlink;
cout<<current->data;
}
void dll :: display()
{
node *current;
if(first!=NULL)
{
for(current=first;current!=NULL;current=current->rlink)
cout<<current->data<<"\t";
}
}
void main()
{
clrscr();
dll l;
l.insert(1);
l.insert(3);
l.insert(4);
l.insert(7);
l.insert(9);
l.display();
l.middle();

}



