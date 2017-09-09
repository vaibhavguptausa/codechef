#include<stdio.h>

int main()
{
    long long int a[100000];
    long long int i,j,t,n,k,l,r,count=0,ans=0;

    scanf("%lld%lld%lld",&n,&l,&r);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    for(i=l;i<=r;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            for(t=j+1;t<n;t++)
            {
                if((a[j]+a[t])>i && (a[t]+i>a[j]) && (a[j]+i>a[t]))
                    {
                        count++;
                        ans++;
                        break;
                    }
            }
            if(count>0)
            {
                break;
            }
        }

    }
    printf("%lld\n",ans);
return 0;
}
