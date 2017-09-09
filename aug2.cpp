#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(i=0;i<n;i++)
#define LL long long int
#define max(a,b) a>b?a:b
int main()
{
	int t,n,d;
	LL a[100001];
	cin>>t;
	while(t--)
	{
		LL sum=0;
		int counter=0,i;
		LL ans=0;
		cin>>n>>d;
		rep(i,n)
		{
			cin>>a[i];
			sum+=a[i];
		}
		
		int ave=sum/n;
	
		if(sum%n !=0)
		{
			cout<<"-1"<<endl;
			
			continue;
		}
		
		else
		{
			for(i=0;i<n;i++)
			{
				if(a[i]==ave)
					continue;
				else	
				for(int j=i+d;j<n;j=j+d)
				{
					if(a[i]>ave)
					{
						ans=ans+a[i]-ave;
						a[j]=a[j]+a[i]-ave;
						a[i]=ave;
						break;
					}
					else if(a[i]<ave)
					{
						if(a[j]>=(ave-a[i]))
						{
						
						ans=ans+ ((j-i)/d)*(ave-a[i]);
						a[j]=a[j]-ave+a[i];
						a[i]=ave;
					    }
					    else if((a[j]<(ave-a[i])))
						{
					    	ans=ans+ ((j-i)/d)*(a[j]);	
					    	a[i]=a[i]+a[j];
					    	a[j]=0;
						}
					
					}
						if(a[i]==ave)
						break;
				}
			}
		}
		
		
				rep(i,n)
				{
					if(a[i]!=ave)
					{
						counter=1;
						break;
					}
				}
			
			if(counter==1)
			{
				cout<<"-1"<<endl;
				
			}	
			else
			cout<<ans<<endl;
		
			}
		
		}
		
	
	

