#include<iostream>
using namespace std;
int  front =-1;
int rear=-1;
int size;
int enque(int q[],int x)
{
	if(rear==size-1)
	cout<<"full";
	else
	{
		rear++;
		q[rear]=x;
	}
}
int deque(int q[])
{
	if(rear==front)
	cout<<"empty";
	else
	{
		front++;
		
	}
	return q[front];
}
int main()
{
	cout<<"enter size";
	cin>>size;
	int *q=new int[size];
	enque(q,2);
	enque(q,3);
	enque(q,4);
	cout<<deque(q)<<" "<<deque(q)<<" "<<deque(q);
	
}
