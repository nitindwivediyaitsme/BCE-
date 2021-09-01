// By- Nitin Dwivedi  Enrolment- 0901EE201082
// Q.7. Write a program which will calculate the roots of a quadratic equation entered by user.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findRoots(float a, float b, float c)
{
    // Base Case
    if (a == 0)
    {
        cout << "Invalid";
        return;
    }

    float x1, x2, discriminant, realPart, imaginaryPart;
    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (discriminant == 0)
    {
        cout << "Roots are real and same." << endl;
        x1 = -b / (2 * a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
}
int main()
{
    float a;
    cout << "Enter coefficient of x^2: " << endl;
    cin >> a;
    float b;
    cout << "Enter coefficient of x: " << endl;
    cin >> b;
    float c;
    cout << "Enter constant: " << endl;
    cin >> c;
    findRoots(a, b, c);

    return 0;
}