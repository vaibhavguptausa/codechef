#include<stdio.h>
#include<string.h>
int comp(char a1[100],char a2[100])
    {
        int n1,n2,n,i;
        n1=strlen(a1);
        n2=strlen(a2);
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
    int t=3,i;
    int money=1000,qns;


    char user[100], password_input[100], password[100]="Btech", input[100],reply[100],reply1[100] ;
     char Answer[10][20]={"chicken","yes","no","yes","poor","no","wade","0","liquid","Danerys"};

    printf("Please enter the username\n");
    scanf("%s", user);

    while(t--)
    {

        printf("enter the Password\n");
        scanf("%s", password_input);
        if(!comp(password,password_input))
        {
            printf("ERROR\n");
            printf("Would you like to try again ?\n");
            scanf("%s", input );
                if(comp(input,"yes"))
                {
                    continue;

                }
                else
                    return 0;
        }
        else
            break;

    }
     if(t<=0)
            return 0;

    //game begins.
    /*user starts with 1000 rupees, for each subsequent correct answer
     his current amount gets multiplied by 2. He has the option at each point to leave the show and take back current amount
     if however he plays the game and gives wrong answer he gets 1/4th of the current amount he has*/

        for(i=0;i<10;i++)
        {
            if(i==0)
            {
                printf("what came first egg or chicken ? \n");
                scanf("%s", reply);

            }
            if(i==1)
            {
                printf("Do you think Salman khan was guilty ?\n");
                scanf("%s", reply);

            }
               if(i==2)
            {
                printf("Do you think God exists ?\n");
                scanf("%s", reply);

            }
               if(i==3)
            {
                printf("Were Rachael and Ross on a break ?\n");
                scanf("%s", reply);

            }
               if(i==4)
            {
                printf("What would you rather be a poor and happy or rich and sad ?\n");
                scanf("%s", reply);

            }
               if(i==5)
            {
                printf("does you horoscope mean anything ?\n");
                scanf("%s", reply);

            }
               if(i==6)
            {
                printf("what is the real name of deadpool ?\n");
                scanf("%s", reply);

            }
               if(i==7)
            {
                printf("Getting nervous ? Have a chill , the money you gonna win ain't real anyway\n");
                printf("what is the angular momentum of electron in s subshell ?\n");
                scanf("%s", reply);

            }
               if(i==8)
            {
                printf("the bay of Bengal is found in which state ?\n");
                scanf("%s", reply);

            }
               if(i==9)
            {
                printf("You are awesome if you reached here, here goes the toughest question\n");
                printf("Who is the queen of Andals ?");
                scanf("%s", reply);
                  printf("hers is your money %d", money*2);
                  return 0;
            }

            if(comp(reply,Answer[i]))
            {
                money=money*2;


            }
            else
            {
                printf("You lose, here is your money %d",money/4);
                return 0;
            }
             printf("would you like to go forward or you are too scared to do it ?\n");
                scanf("%s", reply1);

                if(comp(reply1,"yes"))
                {
                    continue;
                }
                else
                {
                    printf("Here is your money\n %d",money);
                    return 0;
                }
        }

}
