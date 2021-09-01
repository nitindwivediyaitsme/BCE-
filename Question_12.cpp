// By- Nitin Dwivedi  Enrolment- 0901EE201082
// Q.12. Write a program which will display the reverse a number entered by user.
#include <iostream>
using namespace std;

int main()
{
    int n, reversedNumber = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0)
    {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;

    return 0;
}