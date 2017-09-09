#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long sum=0,tot=0,totn=0;
		int count=0;
		long long int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			if(a[i]>=0)
			{
				sum+=a[i];
				count++;
			}
		}
		tot=sum*count;
		//cout<<tot<<endl;
		for(i=0;i<n;i++)
		{
			if(a[i]>=0)
			{
				continue;
			}
			else
			{
				sum+=a[i];
				count++;
				
				if(sum*count<tot)
				{
					sum=sum-a[i];
					count--;
					totn=totn+a[i];
				}
				else
					tot=sum*count;
			}
		}
		//cout<<tot<<' '<<totn<<endl;
		printf("%lld\n",tot+totn);
	}
}
