#include<bits/stdc++.h>
using namespace std ;

//push pop and top functions to be installed;
#define max 1000
class Stack
{
	int top;
public:
	
	int array[max];
	Stack(){
		top=-1;
	};
	bool isempty();
	int pop();
	void push(int x); 
};
 bool Stack::isempty()
 {
 	if(top<max)
 		return true;
 	else 
	 return false;	
 }
 int Stack::pop()
 {
 	if(top<0)
 		return 0;
 	else
	 return array[top--];	
 }
 void Stack::push(int x)
 {
 	if(top>max)
 		return;
 	else
	 array[++top]=x;
	 	
 }
 int main()
 {
 	int i,j;
 	Stack s;
 	for(int top=0;top<110;top++)
 	{
 		s.push(top);
	 }
 	cout<<s.pop()<<"\n"<<"le bhai";
 	
 }
