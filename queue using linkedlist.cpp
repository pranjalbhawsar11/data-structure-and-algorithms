#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *front='\0',*rear='\0';
int enque(int x)
{  node *t=new node;
  if(t=='\0')
  cout<<"heap is full";
  else
  {
  	t->data=x;
  	t->next='\0';
  	if(front=='\0')
  	{
  		front =rear=t;
	  }
	  else
	  {
	  	rear->next=t;
	  	rear=t;
	  }
  }
	
}
int deque()
{
	int x=-1;
	node *p;
	if(front=='\0')
	cout<<"empty";
	else
	{
		x=front->data;
		p=front;
		front=front->next;
		delete p;
	}
	return x;
}
int display()
{   node *p;
p=front;
    if(p=='\0')
    cout<<"empty";
	while(p!='\0')
	{   cout<<p->data<<" ";
		p=p->next;
	}
}
int main()
{
	
	enque(2);
	enque(3);
	enque(4);
	enque(56);
	enque(80);
	cout<<deque()<<endl;
	display();
	
}
