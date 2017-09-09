#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	
	string s,t1;
	string::iterator it;
	cin>>t;
	
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	while(t--)
	{
		
		int a[27]={0};int b[27]={0};
		int counter1=0,counter2=0,counter3=0;
		getline(cin,s);
		getline(cin,t1);
		for(it=s.begin();it!=s.end();it++)
		{
			a[*it-97]++;
			
		}
		for(it=t1.begin();it!=t1.end();it++)
		{
		
			b[*it-97]++;
		}
		/*for(int j=0;j<26;j++)
		cout<<a[j]<<" ";
		cout<<endl;
		for(int j=0;j<26;j++)
		cout<<b[j]<<" ";
		cout<<endl;*/
		for(int i=0;i<26;i++)
		{
			if(a[i]>=1 && b[i]==0)
			{
				counter1++;
			}
			if(a[i]==0 && b[i]>=1)
			{
				counter2++;
			}
			if(a[i]>=2 && b[i]==0)
			{
				counter3++;
			}
		}
		if(counter3>0)
		{
			cout<<"A"<<endl;
			continue;
		}
		else if(counter1==0 && counter2==0)
		{
			cout<<"B"<<endl;
			continue;
		}
		else if(counter1>0 && counter2>0)
		{
			cout<<"B"<<endl;
			continue;
		}
		else if(counter1>0 && counter2==0)
		{
			cout<<"A"<<endl;
			continue;
		}
		else if(counter1==0 && counter2>0)
		{
			cout<<"B"<<endl;
			continue;
		}
	
	
	}
}
