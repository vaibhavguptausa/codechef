#include<bits/stdc++.h>
using namespace std;
#define mod 100000007
struct command
{
	int t;
	int l;
	int r;
};
struct command c[100005];
int a[100005]={0};
void f(int t,int l,int r)
{
	if(t==1)
	{
		a[l]+=1;
		a[l]=a[l]%mod;
		a[r+1]-=1;
		a[r+1]=a[r+1]%mod;
	}
	else
	{
		for(int i=l;i<=r;i++)
		{
			f(c[i].t,c[i].l,c[i].r);
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(a,0,sizeof(a));
		int n,m;
	
		cin>>n>>m;
		for(int i=1;i<=m;i++)
		{
			cin>>c[i].t>>c[i].l>>c[i].r;
		}
		for(int i=1;i<=m;i++)
		{
			f(c[i].t,c[i].l,c[i].r);
		}
		for(int i=1;i<=n;i++)
		{
			a[i+1]+=a[i];
			a[i+1]%=mod;
		}
		for(int i=1;i<=n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		
	
		
	}
	
}
