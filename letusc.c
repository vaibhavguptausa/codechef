#include<stdio.h>
#include<stdio.h>
int sum(int *a,int *b);
int main()
{
	int a,b,x,y,sum_num;
	printf("enter any two integers\n");
	scanf("%d%d",&a,&b);
	sum_num=sum(&a,&b);
	printf("\n%d",sum_num);
}
int sum(int *a,int *b)
{
	int sum_num;
	sum_num=*a+*b;
	return sum_num;
}

