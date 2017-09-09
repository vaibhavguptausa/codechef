#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,t;
	cin>>t;
	while(t--)
	{
		int n,a[100001];
		cin>>n;
		for(i=0;i<n;i++)
		{
			if(n%2==0)
			{
					if(i%2==0)
				{
					a[i]=i+2;
				}
				else
				{
					a[i]=i;
				}
			}
			else
			{
				if(i!=(n-1))
			{
				if(i%2==0)
				{
					a[i]=i+2;
				}
				else
				{
					a[i]=i;
				}
			}
			else
			{
				int temp=a[i-1];
				a[i]=temp;
				a[i-1]=n;
			}
				
			}
			
		}
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
