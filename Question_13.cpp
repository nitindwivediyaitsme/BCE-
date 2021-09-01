// By- Nitin Dwivedi  Enrolment- 0901EE201082
// Q.13. Write a program to generate Fibonacci series.
#include<iostream>
using namespace std;
 
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
 
int main ()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout << fib(n);
    return 0;
}
 