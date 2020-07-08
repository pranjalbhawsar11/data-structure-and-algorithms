#include<iostr


using namespace std;
int main()
{  int n,m,index;
	cin>>n;
	int p[n],w[n],temp[n];
	float x[n],k;
	for(int i=0;i<n;i++)  cin>>p[i];
	
	for(int i=0;i<n;i++)
	x[i]=0.0;
	
	for(int i=0;i<n;i++)  cin>>w[i];
	
	cout<<"enter capacity";
	cin>>m;
	
	for(int i=0;i<n;i++)  pw[i]=p[i]/w[i];
	 int large;
	 while(m>0)
	 { large=0;
	for(int i=0;i<n;i++)
	{ 
		if(temp[i]>large)0
		{
	023+ 		large=temp[i];
			index=i;
		}
		
	}
	if(w[index]<=m)
	{
		m=m-w[index];
		x[index]=1;
		temp[index]=0;
	}
	else
	{
		k=m/w[index];
		x[index]=k;
		break;
	}
}

for(int i=0;i<n;i++)
cout<<x[i]<<endl;

00}
