#include<stdio.h>
int main()
{
    int i,j,t;
    long long int c,d,l;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&c,&d,&l);
        if(c<=2*d)
        {
            if(l<d*4 || l>(c+d)*4)
                printf("no\n");
            else
            {
                if((l)%4==0)
                    printf("yes\n");
                else
                    printf("no\n");
            }
        }
        else
        {
            if(l<((d-2*d+c)*4) || l>(c+d)*4)
                printf("no\n");
            else
            {
                if(((l)%4 ==0))
                    printf("yes\n");
                else
                    printf("no\n");

            }
        }
    }
}
