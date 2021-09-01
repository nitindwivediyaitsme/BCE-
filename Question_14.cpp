// By- Nitin Dwivedi  Enrolment- 0901EE201082
// Q.14. Write a program to check whether a three digit number entered by user is an Armstrong
// number or not?
#include <iostream>
using namespace std;
int main()
{
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three digit integer: " << endl;
    cin >> num;
    originalNum = num;

    while (originalNum != 0)
    {
        // remainder contains the last digit
        remainder = originalNum % 10;
        result += remainder * remainder * remainder; 

        // removing last digit from the original number
        originalNum /= 10;
    }
    if (result == num)
    {
        cout << "ARMSTRONG NUMBER" << endl;
    }
    else
    {
        cout << "NOT AN ARMSTRONG NUMBER " << endl;
    }
    return 0;
}