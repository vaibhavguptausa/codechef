#include<stdio.h>
#include<stdio.h>
long long gcd(long long a,long long b)
{
return b==0?a:gcd(b,a%b);
}
int main()
{
    long long int l,r,g,i,j,k1=0,k2=0,k3=0;

    scanf("%lld%lld%lld",&l,&r,&g);
    if(g>r)
    {
        printf("%d",k3);
        return 0;
    }
    else if(g==r)
    {
        printf("1");
        return 0;
    }
    else if(l>g)
    {
        if(l%g!=0){
        for(i=(l/g)*g+g ;i<r;i=i+g)
        {
            for(j=i+g;j<=r;j=j+g)
            {
                if(gcd(i,j)==g)
                    k1++;
            }

        }
        }
        else{

            for(i=l;i<r;i=i+g)
        {
            for(j=i+g;j<=r;j=j+g)
            {
                if(gcd(i,j)==g)
                    k1++;
            }

        }
        }
        k3=2*k1;
    }
    else if(g>=l)
    {

        for(i=2*g ;i<r;i=i+g)
        {
            for(j=i+g;j<=r;j=j+g)
            {
                if(gcd(i,j)==g)
                    k1++;
            }

        }
        k3=2*k1+(r/g)*2-1;
    }

    printf("%lld",k3);
}
