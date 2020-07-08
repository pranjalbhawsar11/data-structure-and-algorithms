#include<iostream>
using namespace std;
struct graph{
	int v;
	int e;

};
struct edge{
	int src;
	int dest;
	int cost;
};

int union1 ( edge rank[],int xcode,int ycode,int parent)
{   edge s1;
	if(rank[xcode]==s1.rank[ycode])
	{parent[ycode]=xcode;
	s1.rank[xcode]++;
	
}
	else if(s1.rank[xcode]>s1.rank[ycode])
	parent[ycode]=xcode;
	else i
	parent[xcode]=ycode;
	
}
int find(int j,int parent[])
{
	if(j==parent[j])
	return j;
	else 
	return find(parent[j],parent);
}
int kruskal(bst list[])
{
	
	
	int parent[graph->v];
	edge rank[graph->v];
	
	for(int i =0;i<graph->v;i++)
	{
		parent[i]=i;
		rank[i]=0;
	}
	
	for(i=0;i<e;i++)
	{
	source=find(list[i].src);
	destination= find(list[i].dest);
	  	if(source!=destination)
	  	{
	  		cout<<source <<" -  "<<destination<<"\n";
	  		
	  	union1(rank,source,destination,parent);
	  		
	  		
		  }
	}
	
		

}
int main()
{ 
	cout<<"enter no of edges and vertices";
	cin>>graph->e>>graph->v;
	
	edge list[graph->e,temp;
	cout<<"enter source destination and cost";
	for(int i=0;i<graph->e;i++)
	{
		cin>>list[i].src;
		cin>>list[i].dest;
		cin>>list[i].cost;
	}
	
		for(int i=0;i<graph->e -1;i++)
	{
		for(int j=0;j<graph->e -i-1;j++)
		{
			if(list[j+1].cost>list[j].cost)
			{
				temp=list[j+1];
				list[j+1]=list[j];
				list[j]=temp;
			}
		}
	}
kruskal(list)
} 
