// By- Nitin Dwivedi  Enrolment- 0901EE201082
// Q.20. Write a program to find factorial of number using a recursive function.
#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

int main()
{
	int num;
    cout<<"Enter the value of Number:- "<<endl;
    cin>>num;
	cout << "Factorial of " << num << " is " << factorial(num) << endl;
	return 0;
}