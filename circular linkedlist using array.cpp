#include<iostream>
using namespace std;
class crque{
	public:
	int front,rear,size,*q;
	crque(int n)
	{
		front=0;
		rear=0;
		size=n;
		q=new int[size];
	}
	public:
	int enque(int x)
	{
		if((rear+1)%size==front)
		cout<<"full";
		else
		{
			rear=(rear+1)%size;
			q[rear]=x;
			cout<<x<<" is inserted"<<endl;
			
		}
		
	}
	int deque()
	{
		if(front==rear)
		{
			cout<<"empty";
		}
		else
		{
			front =(front+1)%size;	
		}
		return q[front];
	}
	int dis()
	{
		cout<<"final que ";
  for(int i=front+1;i!=rear+1;i=(i+1)%size)
  {
  	cout<<q[i]<<" ";
  }
  
	}
};
int main()
{    int n;
   cout<<"enter size";
   cin>>n;
	crque que=crque(n);
  que.	enque(4);
   que.	enque(5);
	que.enque(8);
	que.enque(9);
	que.enque(10);
	cout<<" dq "<<que.deque();
	cout<<" dq "<<que.deque();
	que.enque(22);
	que.enque(45);
	que.enque(56);
	
     que.dis();
}
