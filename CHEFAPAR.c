#include<stdio.h>
int main()
{
    int i,j,t,m,N,n[100000],dues,k,count;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        m=0;
        scanf("%d",&N);
        for(i=0;i<N;i++)
            scanf("%d",&n[i]);
        for(i=0;i<N;i++)
        {
            if(n[i]==0)
            {
                k=i;
                m++;
                break;
            }
        }
        if(m!=0)
        {
            for(i=k;i<N;i++)
        {
           if(n[i]==1)
                count++;
        }
        dues=1100*(N-k)-1000*count ;
        printf("%d\n",dues);
    }
        else
            printf("0\n");
}
}
