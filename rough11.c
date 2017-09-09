#include<stdio.h>
#include<string.h>
int comp(char a1[100],char a2[100])
    {
        int n1,n2,n,i;
        n1=strlen(a1);
        n2=strlen(a2);
        printf("%d ", n1);
        printf("%d ", n2);
        if(n2!=n1)
            return 0;
        for(i=0;i<n2;i++)
        {
            if(a1[i]!=a2[i])
            {
                return 0;
            }
            else
                continue;
        }
        return 1;
    }
 int main()
 {
    char s1[10],s2[10];
    scanf("%s",s1);
     scanf("%s",s2);
     printf("%d",comp(s1,s2));
 }
