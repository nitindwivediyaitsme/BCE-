// By- Nitin Dwivedi  Enrolment- 0901EE201082
// Q.1 - Write a program to find area of circle, square and rectangle. (C++ Program)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, c, s, radius, area;

    int option;

    do
    {
        cout << "What operation you want to perform? Select option no., Enter 0 to exit." << endl;
        cout << endl;
        cout << "1. Area Of Circle" << endl;
        cout << "2. Area Of Rectangle" << endl;
        cout << "3. Area Of Square" << endl;
        cout << "9. clear screen " << endl;
        cout << "Enter Your Choice :" << endl;

        cin >> option;
        switch (option)
        {
        case 1:

            cout << "\nEnter the Radius of Circle: ";
            cin >> radius;
            area = 3.14159 * radius * radius;
            cout << "Area of Circle = " << area << endl;
            break;

        case 2:

            cout << "\nEnter the Length and Breadth of Rectangle:";
            cin >> a >> b;
            area = a * b;
            cout << "Area of Rectangle = " << area << endl;
            break;

        case 3:

            cout << "\nEnter a Side of square :";
            cin >> a;
            area = a * a;
            cout << "Area of Square = " << area << endl;
            break;

        case 9:
            system("cls");
            break;
        default:
            cout << " Ooops...Invalid Choice, Try Again..";
            break;
        }
    } while (option != 0);
    return 0;
}