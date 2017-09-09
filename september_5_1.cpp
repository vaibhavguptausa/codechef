#include<bits/stdc++.h>
using namespace std;
struct command
{
	int t;
	int l;
	int r;
	
};
struct command c[100005];
int main()
{
	int t;
	cin>>t;
		
	long long int mod=1000000007;
	while(t--)
	{
	long long int a[100005]={0};
		long long int f[100005]={0};	
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=m;i++)
		{
			cin>>c[i].t>>c[i].l>>c[i].r;
		//	cout<<c[i].t<<endl;
		}
		for(int i=m;i>=1;i--)
		{
			f[i]=f[i]+f[i+1];
			if(c[i].t==2)
			{
				f[c[i].r]=(1+(f[c[i].r])%mod +f[i]%mod)%mod ;
				f[c[i].l-1]=(-1+(f[c[i].l-1])%mod -f[i]%mod)%mod ;
			}
			
		}
		for(int i=1;i<=m;i++)
		{
			if(c[i].t==1)
			{
				a[c[i].l]+=f[i]+1;
				a[c[i].r+1]-=(f[i]+1);
			}
		}
		for(int i=2;i<=n;i++)
		{
			a[i]+=a[i-1];
		}
		for(int i=1;i<=n;i++)
		{
			cout<<a[i]%mod<<" ";
		}
		cout<<endl;
		
		
		
	}
}
