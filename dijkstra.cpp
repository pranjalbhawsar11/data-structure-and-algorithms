#include<iostream>
using namespace std;
int v= 9;
int min1(bool [],int []);

int dij_a(int gph[9][9])
{ int distance[v];
bool sptset[v];
for(int i=0;i<9;i++) 
{
distance[i]=INT_MAX; 
sptset[i]=false;
}
int u, src=0;
distance[src]=0;
for(int count=0;count<v-2;count++)
{
 u=min1(sptset,distance);
sptset[u]=true;
for(int i=0;i<v;i++)
{
	if(gph[u][i]!=0)
	{
		if(sptset[i]==false)
		{
			if(distance[u]!=INT_MAX)
			{
				if(distance[u]+gph[u][i]<distance[i])
				{
					distance[i]=gph[u][i]+distance[u];
				}
			}
		}
	}
}

}
for(int j=0;j<v;j++)
{
	cout<<j<<"  "<<distance[j]<<endl;
}

}
	
	
	


int main() 
{ 
   int gph[9][9] = {{0, 4, 0, 0, 0, 0, 0, 8, 0}, 
                      {4, 0, 8, 0, 0, 0, 0, 11, 0}, 
                      {0, 8, 0, 7, 0, 4, 0, 0, 2}, 
                      {0, 0, 7, 0, 9, 14, 0, 0, 0}, 
                      {0, 0, 0, 9, 0, 10, 0, 0, 0}, 
                      {0, 0, 4, 14, 10, 0, 2, 0, 0}, 
                      {0, 0, 0, 0, 0, 2, 0, 1, 6}, 
                      {8, 11, 0, 0, 0, 0, 1, 0, 7}, 
                      {0, 0, 2, 0, 0, 0, 6, 7, 0} 
                     }; 
   
 dij_a(gph);
 return 0;
} 
int min1( bool sptset[9],int distance[9])
{
int 	min=INT_MAX;
	int minindex;
	for(int i=0;i<v;i++)
	{
		if(sptset[i]==false)
		{
			if(distance[i]<min)
			{
				min=distance[i];
				minindex=i;
			}
		}
	}
	return minindex;
}

