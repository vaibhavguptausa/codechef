#include<stdio.h>

int bin(int a[], int n, int A)
{
    int flag=0;
    int pivot1=0;
    int pivot2=n-1;
    int mid;
    while(pivot1<=pivot2)
    {
        mid=(pivot1+pivot2)/2 ;
        if(a[mid]>A)
        {
            pivot2=mid-1;

        }
        else if(a[mid]<A)
        {
            pivot1=mid+1;

        }
        else
            {
                 flag=1;
                break;
            }}
        if(flag==1)
        {
            return 1;
        }
        else
            return 0;
    }

int main()
{
    int a[1000],A;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&A);

    printf("%d",bin(a, n, A));
}
