#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,j,k,p,q,r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&p,&q,&r);
        long long int a[p];
        long long int b[q];
        long long int c[r];
        for(i=0; i<p; i++)
            scanf("%lld",&a[i]);
        for(i=0; i<q; i++)
            scanf("%lld",&b[i]);
        for(i=0; i<r; i++)
            scanf("%lld",&c[i]);
        sort(a, a+p);
        sort(b, b+q);
        sort(c, c+r);
        long long int sum= 0;
        for(i=0; i<q; i++)
        {
            for(j=0; j<p; j++)
            {
                if(b[i]>= a[j])
                {
                    for(k=0; k<r; k++)
                    {
                        if(b[i]>= c[k])
                           {
                               sum=sum+ ((b[i]+a[j])%1000000007*(b[i]+c[k])%1000000007)%1000000007;
                           }
                    }

                }

            }
        }
        printf("%lld\n",(sum%1000000007));
    }
    return 0;
}

