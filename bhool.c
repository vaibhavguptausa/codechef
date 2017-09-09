#include<stdio.h>
int main()
{
    int a,i,j,n,r,c,t;
    int arr[100][100]={0};
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]==45)
                {
                    printf("key found");
                    t=1;
                    break;

                }
                if(t==1)
                    break;
        }
        if(i==r)
            printf("key not found");
    }
}
