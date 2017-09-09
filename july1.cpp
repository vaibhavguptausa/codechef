#include<bits/stdc++.h>

using namespace std;

int main()
{
	string name;
	string sname;
	int t;
	scanf("%d",&t);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
	while(t--)
	{
		getline(cin,name);
		string::iterator it;
			for(it=name.begin();it!=name.end();it++)
			{
				if(*it<97 and *it!=' ')
					*it+=32;	
			}	
		if(*(name.begin())>=97)
			*(name.begin())-=32;
			
		if(name.find(" ")==-1)
		{
		
			cout<<name;
			printf("\n");
			continue;
		}
		
		*(name.begin()+name.find(" "))=49;
		if(name.find(" ")==-1)
		{
				if(*(name.begin()+name.find("1")+1)>=97)
			{
					*(name.begin()+name.find("1")+1)-=32;
			}
				sname=name.substr(name.find("1")+1);
				cout<<*(name.begin())<<"."<<" "<<sname;
		}
		else
		{
				if(*(name.begin()+name.find("1")+1)>=97)
			{
					*(name.begin()+name.find("1")+1)-=32;
			}
					if(*(name.begin()+name.find(" ")+1)>=97)
			{
					*(name.begin()+name.find(" ")+1)-=32;
			}
			
			sname=name.substr(name.find(" ")+1);
			cout<<*(name.begin())<<"."<<" "<<*(name.begin()+name.find("1")+1)<<"."<<" "<<sname;
		}
		printf("\n");
	}
	return 0;
}
