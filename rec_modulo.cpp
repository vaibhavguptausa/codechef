#include<bits/stdc++.h>
using namespace std;
long long int f(long long int x,long long int y,long long int m){

	
    //base case
    if (y == 0) return 1;
 
 	long long int l = f(x, y/2,m)^2 % m ;
    //even y
    if (y % 2 == 0) {
	//cout << f(x,y/2,m) << "even" << endl;

	return l;
   // odd y 
	}
    if (y % 2 == 1){
    	
    	return l * x % m;
    	
	}
    	
 

}
int main()
{
	cout<<f(4523,44543325242352523,64);
}
