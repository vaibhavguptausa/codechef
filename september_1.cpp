#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
long long int a[100001],b[100001],c[100001],d[100001];
	cin>>t;
	while(t--)
	{
		cin>>n;
		int i,j;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long int sum=0,sum2=0;
		b[0]=0;
		for(i=1;i<=n;i++)
		{
			sum=sum+a[i-1];
			b[i]=sum;
		}
		c[0]=0;
		for(j=1;j<=(n);j++)
		{
			c[j]=b[n]-b[j-1];
		}
		for(i=1;i<=n;i++)
		{
			d[i]=b[i]+c[i];
		}
		
		long long int m=10000013452;
		int k=0;
		for(i=1;i<=n;i++)
		{
			
			if(m>d[i])
			{
				m=d[i];
				k=i;
			}
		}
	cout<<k<<endl;	
		
	}
}
