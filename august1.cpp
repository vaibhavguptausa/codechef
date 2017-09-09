#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0;i<n;++i)
int main()
{
	int i,j,t,a[200],n;
	cin>>t;
	while(t--)
	{
		int b[12]={0};
		int c[12]={0};
		int counter=1;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		
				
			b[a[i]]++;
			
		
							
		}
	//	REP(i,n)
	//	{
	//		cout<<b[i]<<' ';
	//	}
		
		
		for(i=1;i<11;i++)
		{
			if(i<7)
			{
				if(b[i]<2)
				{
					
					counter=0;
					break;
				}
			}
			else if(i==7)
			{
				if(b[i]<1)
				{
					
					counter=0;
					break;
				}
			}
			else
			{
				if(b[i]!=0)
				{
					counter=0;
					break;
				}
			}
			
		}
		if(counter==0)
		{
			cout<<"no"<<endl;
			counter=1;
			continue;
		}
		
		else
		{
			for(i=0,j=(n-1);i<(n/2),j>(n/2);i++,j--)
			{
				if(a[i]!=a[j])
				{
					counter=0;
					break;
				}
			}
			if(counter==0)
			{
				cout<<"no"<<endl;
				continue;
			}
			else
			{
				cout<<"yes"<<endl;
				continue;
			}
		}
	
		
	}
}
