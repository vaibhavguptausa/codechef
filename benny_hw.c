#include<stdio.h>
int main()
{
    int i,j,r,x,m,n,l,k;
    int p1[200001],p2[200001];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p1[i]);
    }

    while(m--)
    {
        k=0;
         scanf("%d%d%d",&l,&r,&x);
    for(i=l-1;i<=r-1;i++)
        {
            k=k+(p1[i]%x);
        }
        printf("%d\n",k);
    }


}
