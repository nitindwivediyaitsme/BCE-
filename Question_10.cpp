// By- Nitin Dwivedi  Enrolment- 0901EE201082
// Q.10. Write a program which calculates sum of N – natural numbers.
#include <iostream>
using namespace std;

// Returns sum of first n natural
// numbers
int findSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum = sum + i;
    return sum;
}

int main()
{
    cout<<"Enter a number : ";
    int n;
    cin >> n;
    cout << "The sum of first "<<n<<" natural numbers is "<< findSum(n);
    return 0;
}
