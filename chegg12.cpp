
#include <iostream> // Input/Output Stream Objects
#include <iomanip> // Input/Output Stream Manipulators
#include <cstdlib> // Some Compilers need this file for the system function
using namespace std; // Specifies default namespace for objects

int main()
{
int PatNum; // Patient Account Number
int Month; // 2 digit month
int Day;  // 2 digit day
int Year; //  4 digit year
float Fee; // initial treatment fee
float InitialPay; // initial payment
float MonthlyPay; // monthly payment fee
int Payment; // Payment Number
double InterimPay; // Interim Payment

//system("cls"); //Clear the Screen

/* Intro. & Instructions */
cout << "Patient Statement Portal\n";
cout << "Designed by Julie Whalen - 1 March 2017\n";
cout << "Coded by Julie Whalen - 1 March 2017\n\n";
cout << "Welcome to Dr. Thad Zafolkz's statement portal\n";
cout << "Please enter your four digit patient account number:\n";
cin >> PatNum;

cout << "Please enter the month of your consultation visit (in number format):\n";
      cin >> Month;
while (Month>13||Month<0)
	{
		cout << "Error. Please enter an appropriate month range\n";
		cin>> Month;
	}
cout <<"Please enter the day of your consultation visit\n";

	

cin >> Day;

while (Day>31 || Day<0)
{
	cout << "Error. Please enter an appropriate year\n";
	cin >> Day;
}
cout << "Please enter the year of your consultation visit:\n";

 

cin >> Year;

while(Year>2018)
 {
 	cout << "Error. please enter an appropriate year\n";
 	cin >> Year;
 }
//else 
//	cout << "Please press enter for the next question\n";

cout << "Please enter the treatment fee for services rendered:\n";
cin >> Fee;
cout << "Please enter your initial payment:\n";
cin >> InitialPay;
cout << "What is your desired month payment amount?:\n";
cin >> MonthlyPay;
cout << "Your monthly payment of $" << MonthlyPay << "will be due on" << Month++<<"\n";

/*Output for Printout*/

cout << setw(4) << "Patient Account Number:" << PatNum << endl;
cout << Month<<Day<<Year<<"\n";
cout << setfill('0');
if (Month<10)
    cout << setfill('0');
if (Day<10)
    cout << setfill('0');
//cout << setw(2) << setfill(0) ;
cout << "Consultation Date:"<< Month<<"/"<< Day<<"/" << Year << endl;


cout << "Treatment Fee:\n";
cout << "Initial Payment:\n";
cout << "Balance Due:\n";

/** Created Flowchart, will hand in person in class and/or will also upload and attach as an additional attachment to the assignment online. Also, I am aware that this is an incomplete and inaccurate cpp file. The complete file would have the readouts, the payment schedule based on what the user entered, etc. I will continue working on this program and would like to be given a chance to resubmit. Unfortunately due to my schedule I was unable to come in for tutoring help this week. I plan on rectifying that problem this upcoming week before the midterm exam and hope to resubmit a corrected code for your examination. **/

// system ("pause");  // Debugging support statement
return 0; // Send a null error code to the parent process
}

