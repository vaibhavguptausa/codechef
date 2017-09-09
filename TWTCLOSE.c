#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t,n,m,k,a[1000]={0};
    char s[20];
    scanf("%d%d",&n,&k);

    for(i=0;i<k;i++)
    {
    int count=0;
        scanf("%s", s);

      if(s[2]=='O')
         {
             for(j=0;j<n;j++)
             {
                 a[j]=0;
             }
             printf("0\n");
             continue;
         }
         scanf("%d", &m);

         {
              t= m;
             if(a[t-1]==0)
              a[t-1]++;
             else
                a[t-1]=0;

         for(j=0;j<n;j++)
         {
             if(a[j]==1)
             {
                 count++;
             }
         }
         printf("%d\n",count);
         }

    }

}
