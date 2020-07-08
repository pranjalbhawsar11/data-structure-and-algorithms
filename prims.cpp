#include<iostream>
using namespace std;
int n=5;
int minkey(int key[],bool mst_set[])
{   int min;
	min=INT_MAX;
	int min_index;
for(int k=0;k<n;k++)
{
	if(mst_set[k]==false)
	{
		if(key[k]<min)
		{
			min=key[k];
			min_index=k;
		}
	}
}
return min_index;
}
int main()
{
	int n=5;
    int key[n]; int parent[n];
    bool mst_set[n];
	for(int i=0;i<n;i++)
	{
		key[i]=INT_MAX;
		mst_set[i]=false;
	}
	key[0]=0;
parent[0]=-1;
	int graph[5][5]={{0,2,0,6,0},
	              {2,0,3,8,5},
	              {0,3,0,0,7},
	              {6,8,0,0,9},
	              {0,5,7,9,0},
				  };
	
		for(int count=0;count<n-1;count++)
	{
		int u=minkey(key,mst_set);
		mst_set[u]=true;
	
for(int k=0;k<n;k++)
{
if(graph[u][k]!=0)
{
	if(mst_set[k]==false)
	{
		if(key[k]>graph[u][k])
		{  key[k]= graph[u][k];
			parent[k]=u;
		}
	}
}
}
}
for(int i=1;i<n;i++)
{   
	cout<<parent[i]<<"-"<<i<<"="<<key[i]<<endl;
}
}
