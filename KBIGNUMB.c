#include<stdio.h>
#include<string.h>
int main()
{
   char a[100000],b[100000];
   long int i,j,k,t,m,n,N;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%s", a);
       strcpy(b,a);
       scanf("%lld%lld",&n,&m);
       for(i=0;i<(n-1);i++)
       {
           strcpy(a, strcat(a,b));
       }
       N=atoi(a);
       printf("%lld\n",N);
   }
}
