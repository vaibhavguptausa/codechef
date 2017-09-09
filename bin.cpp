#include<iostream>
#include<algorithm>
using namespace std;
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
    int a[1000];
    int n,A;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&A);
    sort(a,a+n);
    printf("%d",bin(a, n, A));
}

