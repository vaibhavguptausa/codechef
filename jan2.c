#include<stdio.h>
int main()
{
    int t,n,i,j,c[50001][2],m,k;
    long long int p[50001],p1[50001];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&p[i]);
        }
        for(i=0;i<n-1;i++)
            for(j=0;j<2;j++)
        {
            scanf("%d",&c[i][j] );
            c[i][j]-=1;
        }
        for(i=0;i<n;i++)
        {
            m=0;
            k=0;
            for(j=0;j<n;j++)
            {
                p1[j]=p[j];
            }
            for(j=0;j<n-1;j++)
            {
                if(c[j][0]==i || c[j][1]==i)
                {
                    p1[c[j][0]]=0;
                    p1[c[j][1]]=0;
                }

                else
                    continue;
            }
            for(j=0;j<n;j++)
            {
                if(m<p1[j])
                {
                    m=p1[j];
                    k=j;
                }
            }
            printf("%d ",k+1);
        }
    }
}

