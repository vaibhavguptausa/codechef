#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,t;
	cin>>t;
	while(t--)
	{
		long long int u,v;
		cin>>u>>v;
		long long int k=u+v;
		long long int sum=k*(k+1)/2;
		long long int rank=sum+u+1;
		cout<<rank<<endl;
	}
}
