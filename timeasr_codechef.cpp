#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,t;
	double A,x,y;
	int X,Y;
	cin>>t;
	while(t--)
	{
		cin>>A;
		for(i=0;i<12;i++)
		{
			if(A==0.00)
			{
				cout<<"00:00"<<endl;
				break;
			}
			if(A==180.00)
			{
				cout<<"06:00"<<endl;
				break;
			}
			X=(int)(2*(360*i+A)/11);
			Y=	(int)(2*(360*i-A)/11);
			
			x=2*(360*i+A)/11;
			y=	2*(360*i-A)/11;
		//	cout<<y<<" "<<x<<endl;
			if(i==0)
			{
					if((x-X)<=0.0014)
			{
				//cout.precision(2);
				printf("%.2d:%.2d\n",X/60,X%60);
				continue;
			}
			}
			else
			{
			
				if((x-X)<=0.0014)
				{
					//cout.precision(2);
					printf("%.2d:%.2d\n",X/60,X%60);
					continue;
				}
				
				else if((y-Y)<=0.0014)
				{
					//cout.precision(2);
					printf("%.2d:%.2d\n",Y/60,Y%60);
					continue;
				}
			}
		}
	}
	
	
}
