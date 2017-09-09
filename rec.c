#include<stdio.h>
int rec(int n);
int main()
{
  int n,i,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      printf("\n%d",rec(i));
  }
}
int rec(int n)
{
    int k;
    if(n==1)
    k=1;
    else if(n==2)
    k=1;
    else
        k=rec(n-1)+rec(n-2);
    return k;
}
