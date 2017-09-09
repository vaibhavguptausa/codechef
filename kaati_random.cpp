#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int  ans(long long int a,long long int b)
{
	if(a>b)
		return a/b;
	else
		return b/a;	
}
int main()
{
		int t;
		cin>>t;
			long long int a,b,n,s;
		while(t--)
		{
		
			cin>>a>>b>>n ;
			if(n%2 ==0)
			{
				 s= ans(a,b);
			}
			else
			{
				s= ans(2*a,b);
			}
			cout<<s<<endl;
		}
}

