#include<stdio.h>
#include<math.h>
int power(int a, int b)
{
    int i,n=1;

    for(i=0;i<b;i++)
        n=n*a;
    return n;
}
int main()
{
    int i,j,k,t,n,count=0,M,m;
    long long int N;
    scanf("%d",&t);


    while(t--)
    {
        scanf("%d%d%d",&n,&m,&M);

        k=1;
        count=0;
        N=n;

        while(1)
        {
            if(n<k)
                break;

            else
            {
                k=k*10;
                count++;
            }
        }


        for(i=0;i<(m-1);i++)
        {
            N=N*power(10,count)+n;

        }
        printf("%lld\n",N);
        printf("%d\n",N%M);

    }
}
