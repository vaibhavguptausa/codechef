#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,g,k;

    long long int n;
    scanf("%d",&t);
    while(t--)
    {

    char d[1000000];    int flag=0;
        scanf("%s",d);

        k=strlen(d);
        printf("%d\n",k);
        if(k%2 ==0)
            {

                    i=0;
                    while(1)
                    {
                          if(d[k/2+i-1]=='\0')
                          {
                              break;
                          }
                       if(d[k/2-1-i]!=d[k/2+i])
                            {
                               if(d[k/2-i-1]>d[k/2+i])
                               {
                                   d[k/2+i]=d[k/2-i-1];

                               }
                               else
                               {
                                   d[k/2-1]=d[k/2-1]+1;
                                   d[k/2]=d[k/2-1];

                               }
                               flag++;
                               break;
                             }

                          i++;

                    }
                    if(flag>0)
                    {
                        d[k/2-1]++;
                        d[k/2-1]=d[k/2];
                    }

                }

            else
            {


                    i=1;
                    while(i+1)
                    {
                       if(d[(k-1)/2-i]!=d[(k+1)/2+i])
                            {
                               if(d[(k-1)/2-i]>d[(k+1)/2+i])
                               {
                                   d[(k+1)/2+i]=d[(k-1)/2-i];
                               }
                               else
                               {
                                   d[(k-1)/2]++;

                               }
                               flag++;
                               break;
                             }
                          if(d[k/2+i]=='\0')
                          {
                              break;
                          }
                          i++;

                    }
                    if(flag>0)
                    {
                        d[(k-1)/2]++;


                    }

                }
                for(i=0;i<=k/2;i++)
                {
                    d[k-1-i]=d[i];
                }
                printf("%s\n", d);
            }



        }


