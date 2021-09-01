// By- Nitin Dwivedi  Enrolment- 0901EE201082
// Q.6. Write a program to check whether a year entered by a user is Leap year or not.
#include <bits/stdc++.h>
using namespace std;

bool checkYear(int year)
{

	if (year % 400 == 0)
		return true;

	if (year % 100 == 0)
		return false;

	if (year % 4 == 0)
		return true;
	return false;
}

int main()
{
	int year;
    cout<<"Enter the year: ";
    cin>>year;

	if(checkYear(year)) {
     cout << "Yes, this a Leap Year.";
    }
     else{
	 cout << "No, this is not a Leap Year.";
     }
	return 0;
}