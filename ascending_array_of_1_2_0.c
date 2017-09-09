#include<stdio.h>
int main()
{
    int i,j,t,k,n;
    int A[101];
    int a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        a=0,b=0,c=0;
        for(i=0;i<n;i++)
        {

            scanf("%d",&A[i]);
            if(A[i]==0)
                a++;
            else if(A[i]==1)
                b++;
            else if(A[i]==2)
                c++;

        }

        for(i=0;i<a;i++)
            printf("0 ");
        for(i=0;i<b;i++)
            printf("1 ");
        for(i=0;i<c;i++)
            printf("2 ");
         printf("\n");

    }

}
