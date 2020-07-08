#include<iostream>
#include<algorithm>
using namespace std;
struct job{
	int id;
	int profit;
	int dead;
	
};
int main()
{    int n,ptotal=0;
    cout<<"enter number of jobs";
	cin>>n;
	job a[n];
	cout<<"enter the proft and deadlines"<<endl;
	for(int i=0;i<n;i++)
	{cin>>a[i].profit;
	cin>>a[i].dead;
	a[i].id=i+1;
	}
	job temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j+1].profit>a[j].profit)
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
  
  
	bool slot[n]={false};
	
	int result[n];
	
	for(int i=0;i<n;i++)
	{
		for(int j=a[i].dead-1;j>=0;j--)
		{
			if(slot[j]==false)
			{  
				result[j]=i;
				ptotal+=a[i].profit;
				slot[j]=true;
				break;
			}
		}
		
	}
	cout<<"sequence of jobs are "<<endl;
	for(int i=0;i<n;i++)
	{
		if(slot[i]==true)
		{
			cout<<"j"<<a[result[i]].id<<endl;
		}
	}
	cout<<"total profit is = "<<ptotal;
}
