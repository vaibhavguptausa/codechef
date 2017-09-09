#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(i=0;i<n;i++)
int qual[1001][1001];

int main()
{
	int n,m,i,t,j,counter,index;
	long long int minsal[1001],offsal[1001],maxjob[1001];
	string str[1001];
	string::iterator it;
	cin>>t;
	while(t--)
	{
		int candjob=0,noselec=0;
		int placed[1001]={0};
		long long int sal=0,totsal=0;
		int counter=0,index;
		cin>>n>>m;
		rep(i,n)
		{
			cin>>minsal[i];
		}
		rep(i,m)
		{
			cin>>offsal[i];
			cin>>maxjob[i];
			
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		rep(i,n)
		{
			getline(cin,str[i]);
		}
		for(i=0;i<n;i++)
		{
			sal=minsal[i];
			index=-1;
			for(it=str[i].begin(),j=0;it!=str[i].end(),j<m;it++,j++)
			{
				if(*it=='0')
				{
					continue;
				}
				else
				{
					if(sal<offsal[j] && maxjob[j]!=0)
					{
						sal=offsal[j];
						index=j;
					}
					else
						continue;
					
				
				}
				
				
			}
			if(index!=-1)
				{
					placed[index]++;
					maxjob[index]--;
					totsal+=offsal[index];
					
				}
		}
		rep(i,m)
		{
			candjob+=placed[i];
			if(placed[i]==0)
			{
				noselec++;
			}
		}
		cout<<candjob<<" "<<totsal<<" "<<noselec<<endl;
		
	}
}
