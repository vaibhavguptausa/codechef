#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int p,q,r,i;
	cin>>t;
	while(t--)
	{
		cin>>p>>q>>r;
		long long int a[p+1],b[q+1],c[r+1];
		for(i=0;i<p;i++)
			scanf("%lld",&a[i]);
		for( i=0;i<q;i++)
			{
		scanf("%lld",&b[i]);
			}
		for( i=0;i<r;i++)
		scanf("%lld",&c[i]);
			
		long long int sum=0;
		for(i=0;i<q;i++)
			{
				for(int j=0;j<p;j++)
					{
						if(a[j]<=b[i])
						{
						for(int k=0;k<r;k++)
						{
							if(c[k]<=b[i])
							{
							
							 sum=(sum+((c[k]+b[i])%1000000007)*((a[j]+b[i])%1000000007))%1000000007;
							 
							}
						
						}
					}
						
					}
					
					
			}	
			printf("%lld\n",sum);
	}
}
