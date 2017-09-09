#include <iostream>
using namespace std;

int pow_mod(int a, int b){
	if(b == 0){
		return 1;
	}
	int t = pow_mod(a, b/2);
	if(b%2==0){
		return (t*t)%10;
	}
	else{
		return ((t*t)*a)%10;
	}
}

int main(){
	int t; 
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		cout << pow_mod(a, b) << "\n";
	}
	return 0;
}
