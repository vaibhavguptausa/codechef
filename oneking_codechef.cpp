#include<bits/stdc++.h>
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
struct kingdom
{
	int s;
	int f;	
};
bool compare(kingdom a1, kingdom a2)
{
	return (a1.f<a2.f);
}

int main()
{
	int i,j,t,n;
	kingdom a[100002];
	cin>>t;
	while(t--)
	{
		int ans=1;
		cin>>n;
		rep(i,n)
		{
			cin>>a[i].s;
			cin>>a[i].f;
		}
		sort(a,a+n,compare);
		rep(i,n)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i].f>=a[j].s)
				{
					continue;
				}
				else
				{
					ans++;
					i=j;
				}
			}
			
		}
		cout<<ans<<endl;
		
	}
}
