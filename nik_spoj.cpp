#include <iostream>
#include<math.h>
using namespace std;

int main() {

	// your code here
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int m,n;
        cin >> m >> n;
        for(int j=m;j<=n;j++)
        {
            int count = 0;
            for(int k=2;k<=pow(j,0.5);k++)
            {
                if(j%k == 0)
                {
                    count = 1;
                    break;
                }
            }
            if(count == 0)
                cout << j<<endl;
        }
    }
}
