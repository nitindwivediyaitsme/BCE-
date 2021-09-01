// By- Nitin Dwivedi  Enrolment- 0901EE201082
// Q.2. Write a program to calculate simple interest.
#include <iostream>
using namespace std;
int main()
{
    // Simple Interest = (P × R × T)/100
    // where P = Principal Amount, R = Rate per Annum, T = Time (years)
    float P, R, T;
    cout << "Enter the Principle Ammount: " << endl;
    cin >> P;
    cout << "Enter the Rate of Interest: " << endl;
    cin >> R;
    cout << "Enter the Time : " << endl;
    cin >> T;

    /* Calculate simple interest */
    float SimpleInterest = (P * T * R) / 100;

    /* Print the resultant value of SI */
    cout << "Simple Interest = " << SimpleInterest;
    return (0);
}