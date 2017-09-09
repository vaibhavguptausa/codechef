#include<bits/stdc++.h>
using namespace std;
#define maximum(a,b) a>b?a:b;
int main()
{
	int t;
	long long int n,b,x,y,max1,max2,max3,max,x1,x2,y1,y2,y3;
	cin>>t;
	while(t--)
	{
		max=0;
		cin>>n;
		
		cin>>b;
		x=n/2;
		if(n<b)
		{
			cout<<0<<endl;
		}
		else if ((n/2)<b)
		{
			x=n-b;
			cout<<(n-b)<<endl;	
		}
		else
		{
		
			for(x=(n/2-b/2-1);x<=(n/2+b/2);x++)
			{
				y=(n-x)/b;
				max =maximum(max,x*y);
				
			}
			cout<<max<<endl;
		}
	}
}
