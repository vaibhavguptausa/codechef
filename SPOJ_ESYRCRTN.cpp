#include<bits/stdc++.h>
using namespace std;
long long int f(long long int a)
{
	
	{
		long long int div=a/3;
		int rem=a%3;
		if((div%2)==0)
		{
			if(rem==1)
			return 1;
			else if(rem==2)
			return 3;
			else
			return -2;
		}
		else
		{
		
			if(rem==1)
			return -1;
			else if(rem==2)
			return -3;
			else
			return 2;
		}
		
	}
}
int main()
{
	int t;
	long long int a,ans;
	cin>>t;
	while(t--)
	{
		
		cin>>a;
		if(a==1)
		ans=1;
		else if(a==2)
		ans=4;
		else if(a==3)
		ans=6;
		else
		ans=f(a-1)+3;
		cout<<ans<<endl;
	}
}
