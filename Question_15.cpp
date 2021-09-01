// By- Nitin Dwivedi  Enrolment- 0901EE201082
// Q.15. Write a program to check whether a number entered by user is Prime or not.
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number:"<<endl;
    cin >> n;

    bool flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "No, It's a Non-prime" << endl;
            flag = 1;
            break;
        }
    }
        if (flag == 0)
        {
            cout << "It's a Prime Number" << endl;
        }
    
    return 0;
}