#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	int i,j,t;
	
	
	cin>>t;
	while(t--)
	{
		char n[100001];
		int x[10] = {0};
		scanf("%s",n);
		for(i=0;n[i]!='\0';i++)
		{
			int k = n[i]-'0';
			x[k]++;
		}
		//cout << n << "\n";
		if(x[6]==0 && x[7]==0 && x[8]==0 && x[9]==0)
		{
			cout<<endl;
			continue;
		}
		for(i=6;i<=9;i++)
		{
			
			
			if(x[i]>=1)
			{
				for(j=0;j<=9;j++)
				{
				
					if(i==6 && j<5)
					continue;
					if(i==9 && j!=0)
					break;
					if(i!=j)
					{
						if(x[j]>=1)
						{
						int num=i*10+j;
						char c=(char)num;
						cout<<c;
						
						}
					}
					else if(i==j && x[i]>=2)
					{
						int num=i*10+j;
						char c=(char)num;
						cout<<c;
					}
				
				
				
				}	
			}
			
		}
		cout<<endl;
		
	}
}
