// By- Nitin Dwivedi  Enrolment- 0901EE201082
// Q.21. Write a program to add two complex numbers (use structure variable to store a complex number) 
#include <iostream>
using namespace std;

struct Complex
{
    int realPart;
    int imaginaryPart;
};

int main()
{
    Complex c1, c2, sum;

    cout << "Enter value of A and B  where A + iB is first complex number" << endl;
    cin >> c1.realPart >> c1.imaginaryPart;

    cout << "Enter value of C and D  where C + iD is second complex number" << endl;
    cin >> c2.realPart >> c2.imaginaryPart;

    sum.realPart = c1.realPart + c2.realPart;
    sum.imaginaryPart = c1.imaginaryPart + c2.imaginaryPart;

    if (sum.imaginaryPart >= 0)
    {
        cout << "Sum of complex numbers is " << sum.realPart << " + " << sum.imaginaryPart << "i";
    }
    else
    {
        cout << sum.realPart << " - (" << sum.imaginaryPart << ")i";
    }
    return 0;
}