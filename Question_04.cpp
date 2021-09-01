// By- Nitin Dwivedi  Enrolment- 0901EE201082
// Q.4. Write a program to check whether a number entered by user is even or odd.
#include <iostream>
using namespace std;

// Returns true if n is
// even, else odd
bool isEven(int n)
{
    return (n % 2 == 0);
}

// Driver code
int main()
{
    int n;
    cout<<"Enter A Number: ";
    cin>>n;
    if (isEven(n))
    {
        cout<<"Even ";
    }
    else{
        cout<<"Odd";
    }
    

    return 0;
}