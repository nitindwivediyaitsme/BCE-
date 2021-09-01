// By- Nitin Dwivedi  Enrolment- 0901EE201082
// Q.5. Write a program to find the largest among three numbers entered by user.
#include <iostream>
using namespace std;
int main()
{
    float n1, n2, n3;
    cout << "Enter three numbers: ";

    cin >> n1 >> n2 >> n3;

    if (n1 >= n2 && n1 >= n3)
    {
        cout << "Largest number: " << n1;
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        cout << "Largest number: " << n2;
    }
    else
        (n3 >= n1 && n3 >= n2);

    cout << "Largest number: " << n3;

    return 0;
}