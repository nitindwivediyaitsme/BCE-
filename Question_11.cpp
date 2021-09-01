// By- Nitin Dwivedi  Enrolment- 0901EE201082
// Q.11. Write a program to find factors of a number entered by user.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a positive number : ";
    //user input
    cin >> num;
    cout << "Factors of " << num << " are : " << endl;
    
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            cout << i << " ";
    }
    return 0;
}