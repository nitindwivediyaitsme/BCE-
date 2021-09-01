// By- Nitin Dwivedi  Enrolment- 0901EE201082
// Q.16. Write a program to generate prime numbers between 1 to n (where 'n' is an integer entered by user)
#include <iostream>
using namespace std;

void totalPrimeNo(int n)
{

    int prime[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin >> n;
    cout<<"Prime numbers between 0 and "<<n<<" are :"<<endl;
    totalPrimeNo(n);
    return 0;
}
