#include<bits/stdc++.h>
using namespace std;
#define min(a,b) a<b?a:b
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		map<int,list<pair<int,int> > > m ;
		map<int,list<pair<int,int> > >:: iterator itr,it;
		int n,q,i1,i2,i3,counter=0;
		cin>>n>>q;
		list<pair<int, int> >:: iterator v;
		vector<int > a(n+1);
		fill(a.begin(),a.end(),-1);
		for(int i=0;i<q;i++)
		{
			cin>>i1>>i2>>i3;
			m[i1].push_back(make_pair(i2,i3));
		}
		/*for(itr=m.begin();itr!=m.end();itr++)
		{
			cout<<itr->first<<" ";
		}
		cout<<endl;*/
		for(itr=m.begin();itr!=m.end();itr++)
		{
			for(v=itr->second.begin();v!=itr->second.end();v++)
			{
				if(a[itr->first]==-1 && a[v->first]==-1)
				{
					if(itr->first==v->first)
					{
						if(v->second!=0)
						{
							counter=1;
							break;
						}
						a[itr->first]=v->second;
					}
					else
					{
						a[itr->first]=0;
						a[v->first]=v->second;
					}
				}
				else if(a[itr->first]==-1 || a[v->first]==-1)
				{
					if(a[itr->first]==-1)
					{
						//a[itr->first]=a[v->first]+v->second;
						
						
						a[itr->first] = (a[v->first] + v->second)%2;
					}
					else
					{
						//a[v->first]=a[itr->first]+v->second;
						a[v->first] = (a[itr->first] + v->second)%2;
						
					}
				}
				else if(a[itr->first]!=-1 && a[v->first]!=-1)
				{
					//if(itr->first==v->first && a[itr->first]!=0)
					//{
					//	counter=1;
					//	break;
					//}
					if(abs(a[itr->first]-a[v->first])!= v->second)
					{
						//cout<<"gandu"<<abs(a[itr->first]-a[v->first])<<endl;
						counter=1;
						break;
					}
				}
			}
			if(counter==1)
			{
				
				break;
			}
			else
			continue;
		}
		if(counter==1)
		{
			cout<<"no"<<endl;
		}
		else
			cout<<"yes"<<endl;
		
		
		
		
		
		
	}
}
