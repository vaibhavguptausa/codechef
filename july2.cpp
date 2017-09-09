#include<bits/stdc++.h>
#include<string.h>
using namespace std;
long long int m[200000],n[200000];
int main()
{
	long long int t,i,a1,a2,a3,k1,k2,max1,max2;
	scanf("%lld",&t);
	char a[100009];
	
	while(t--)
	{
		scanf("%s", a);
			long long int L=strlen(a);
		for(i=0;i<2*L;i++)
		{
			m[i]=n[i]=0;
		}
	
		a1=a2=a3=k1=k2=max1=max2=0;
	
		for(long long int i=0;i<L;i++)
		{
			if(a[i]=='>')
			{
				a1++;
				m[k1]++;
			}	
			else if(a[i]=='<')
			{
			
				a1=0;
			
			
				k1++;
				continue;
				
			}
			
		}
			for(int i=0;i<L;i++)
			{
			
				if(a[i]=='<')
				{
					a2++;
					n[k2]++;
				}	
				if(a[i]=='>')
				{
					
					a2=0;
				
				
					k2++;
					continue;
				
			
				}
			}
		max1=m[0];
		max2=n[0];
		for(i=0;i<=k1;i++)
		{
			if(m[i]>max1)
			{
				max1=m[i];
				
			}
		}
			for(i=0;i<=k2;i++)
		{
			if(n[i]>max2)
			{
				max2=n[i];
			}
		}
		if(max1>max2)
		{
				printf("%lld\n",max1+1);
		}
		else
			printf("%lld\n",max2+1);
	
		
	}
}

