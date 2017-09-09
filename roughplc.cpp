#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{
    int i,j,l,t;
    string str;
    string s;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(t--)
    {
        getline(cin,str);
        char ch;
        int k=0;
        int c=0;
        int cnt=0;
        for(i=0; i<str.size(); i++)
            str[i]= tolower(str[i]);
        for(i=0; str[i]!='\0'; i++)
        {
            if(str.at(i)==' ')
                cnt++;
        }
        if (cnt==0)
        {
            s[0]= toupper(str[0]);
            cout << s[0];
            for(i=1; i<(str.size()); i++)
                {
                    ch=str[i];
                    s[i]=ch;
                    cout << s[i];
                }
            cout << endl;
        }
        if(cnt==1)
        {
            ch= toupper(str[0]);
            cout << ch;
            ch='.';
            cout << ch;
            k=2;
            for(j=0; j<str.length(); j++)
                if(str[j]==' ')
                    break;
            s[2]= toupper(str[j+1]);
            cout << s[2];
            for(i=j+2; i<str.length(); i++)
            {
                ch= str[i];
                cout << ch;
            }
            cout << endl ;
        }
        if(cnt==2)
        {
            ch= toupper(str[0]);
            cout << ch;
            ch='.';
            cout << ch;
            for(j=0; j<str.length(); j++)
                if(str[j]==' ')
                    break;
            ch= toupper(str[j+1]);
            cout << ch;
            ch='.';
            cout << ch;
            for(l=j+1; l<str.length(); l++)
            {
                if(str[l]==' ')
                    break;
            }
            ch= toupper(str[l+1]);
            cout << ch;
            for(i=l+2; i<str.length(); i++)
            {
                ch= str[i];
                cout <<ch;
            }
            cout << endl;
        }
    }
    return 0;
}

