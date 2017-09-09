#include <iostream>
#include <bits/stdc++.h>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
	map<int, int> maps;
	int a, b;
	cin >> a >> b;
	maps.insert(pair <int, int> (a,b));

	/*map<int, int>:: iterator it;
	for(it = maps.begin(); it != maps.end(); it++){
		cout << *it->first << " ";
	}*/

	/*for ( const auto &myPair : maps ) {
        std::cout << myPair.first << "\n";
    }*/
	return 0;
}