// By- Nitin Dwivedi  Enrolment- 0901EE201082
// Q.9. Write a program which generates a multiplicative table of a number entered by user.
/* #include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Give me multiplicative table of: ";
    cin >> n;
    for (int i = 1; i <= 10; i++){
        cout << n << " * " << i << " = " << n * i << endl;
    }
    return 0;
}

*/

#include <stdio.h>
#include <math.h>
int main()
{
      int f1,f2,f3,n,i=2,s=1;
      f1=0;
      f2=1;
      printf("How many terms do you \nwant in Fibonacci series? : ");
      scanf("%d",&n);
      printf("\nFibonacci Series Upto %d Terms:\n\n",n);
      printf("%d, %d",f1,f2);
      while(i<n)
      {
            f3=f1+f2;
            printf(", %d",f3);
            f1=f2;
            f2=f3;
            s=s+f3;
            i++;
      }
      printf("\n\nSum of Fibonacci Series : %d",s);
      return 0;
}