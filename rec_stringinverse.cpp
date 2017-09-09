#include<bits/stdc++.h>
using namespace std;
void rev(char* a)
{

	if(*a)
	{

	
	rev (a+1);
	cout<<*a;
}
}
int main()
{
	char a[100];
	if('\0')
	{
		cout<<"afaf";	
	}
	cin>>a;
	rev(a);
}
