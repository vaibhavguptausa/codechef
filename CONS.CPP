#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long mem[1000000];

long rec(long n){
	if(n == 1 || n == 0){
		return n;
	}
	
	long a, b, c;
	a = n/2;
	b = n/3;
	c = n/4;
	
	return max(n, rec(n/2) + rec(n/3) + rec(n/4));
	
}

int main(){
	int n;
	while(scanf("%d", &n) == 1){
		cout << rec(n) << "\n";
	}
	return 0;
}
