#include<bits/stdc++.h>
#include<stack>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
	int i;
	string  mystr,ustr="";
	cin>>mystr ;
	stack<char> s;
	for(int i=0;i<mystr.length();i++)
	{
		s.push(mystr[i]);
		
	}
	i=0;
	while(!s.empty())
	{
		ustr[i++]=s.top();
		s.pop();
		
	}
	cout<<ustr;
}
