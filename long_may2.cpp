#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int i;
	while(t--)
	{
		int n,k=0,s=0,in=0;
		cin>>n;
		int a[2*n],b[n],c[2*n];
		for( i=0;i<(2*n);i++)
		{
			scanf("%d",&a[i]);
		
		
		}
		sort(a,a+(2*n));
	
		for(i=n;i<2*n;i++)
		{
			b[i-n]=a[i];
		}
		int m=0,n1=0;
			for(i=0;i<(2*n);i++)
		{
			if(i%2==0)
			{
				c[i]=a[n1];
				n1++;
			}
			else
			{
				c[i]=b[m];
				m++;
			}
		}
		cout<<b[(n-1)/2]<<endl;
		for(i=0;i<2*n;i++)
		{
			printf("%d ",c[i]);
		}
		
	
	
		printf("\n");
	}
}
