#include<iostream>
using namespace std;
#include<stdlib.h>
#include<algorithm>
int atoi(const char * str);
int main()
{
	long long int A[200000];
	char s;
	int i,j,k,t,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s", s);
	
		A[i]= atoi(s);
	}
	sort(A,A+n);
	for(i=0;i<n;i++)
	{
		printf("%lld\n", A[i]);
	}
	
}
