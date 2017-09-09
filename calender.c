//calender begins from 2001 and goes until your machine gives up
#include<stdio.h>

int days(int date, int month, int year)
{
   int a1[100]={31,28,31,30,31,30,31,30,31,30,31,30};
    int a2[100]={31,29,31,30,31,30,31,30,31,30,31,30};
    int year_days=0,month_days=0,days_days=0,i,j;
    year_days= (((year-1)-2000)/4 )-(year-1-2000)/100 + (year-1-2000)/400 +366 + (year-1-2000)*365 ;

    if(year%4 ==0 )
    {
        for(j=0;j<(month-1);j++)
        {
            month_days+=a2[j];
        }
    }
    else
    {
         for(j=0;j<(month-1);j++)
        {
            month_days+=a1[j];
        }
    }

    days_days=date;
    return days_days+month_days +year_days-1 ;
}
int pos(n)
{
    if(n>0)
        return n;
    else
        return 0;
}
int main()
{
    int a1[100]={31,28,31,30,31,30,31,30,31,30,31,30};
    int a2[100]={31,29,31,30,31,30,31,30,31,30,31,30};
    int year_days=0,month_days=0,days_days=0,i,j,k;
    int date,month,year;
    char reply,day[100];


    char name_days[20][100]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    printf("Choose an option \n");
    printf("a.you want to know a specific date\n");
    printf("b.you want a specific month\n");
    printf("c.you want a specific year\n");
    scanf("%c", &reply);
    switch(reply)
    {
    case 'a' :
        {
            printf("Now enter day month and year with one space between all of them\n");
            scanf("%d%d%d",&date,&month,&year);
            k=days(date,month,year)%7;
             printf("%d/%d/%d-->",date,month,year);
            puts(name_days[k]);
            printf("\n");
        break;
        }
    case 'b' :

        {
            printf("Now enter the month and year you want separated by a space \n");
            scanf("%d%d",&month,&year);
            if(year%4==0)
            {
                month_days=a2[month-1];
            }
            else
            {
                month_days=a1[month-1];
            }
            for(i=1;i<=month_days;i++)
            {
                date=i;
                k=days(date,month,year)%7;
                printf("%d/%d/%d-->",date,month,year);
                puts(name_days[pos(k)]);
                printf("\n");

            }
            break;
        }
    case 'c' :
        {
            printf("Now enter the year \n");
            scanf("%d",&year);
            if(year%4==0)
            {
                year_days=366;
                for(j=0;j<12;j++)
                for(i=0;i<a2[j];i++)
                {
                    date=i+1;
                    k=days(date,j,year)%7;
                    printf("%d/%d/%d-->",date,j+1,year);
                    puts(name_days[pos(k)]);
                    printf("\n");
                }
            }
            else
            {
                 year_days=366;
                for(j=0;j<12;j++)
                for(i=0;i<a1[j];i++)
                {
                    date=i+1;
                    k=days(date,j,year)%7;
                    printf("%d/%d/%d-->",date,j+1,year);
                    puts(name_days[pos(k)]);
                    printf("\n");
                }
            }
             break;
        }

    default :
        printf("Thanks for wasting my time");

}
}
