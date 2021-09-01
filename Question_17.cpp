// By- Nitin Dwivedi  Enrolment- 0901EE201082
// Q.17. Write a program to search an element in an Array.

#include <iostream>
using namespace std;
 
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
int main(void)
{
    
   int n;
   cout<<"Enter the size of the array:- ";
   cin>>n;
   int arr[n];
   cout<<"Enter the array of size "<<n<<endl;
   for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
   }
   int x;
   cout<<"Enter the element you want to find:- ";
   cin>>x;
   
    int result = search(arr, n, x);
    if(result == -1){
     cout << "Element is not present in array";
    }
    else{
        cout << "Element is present at index " << result;
    }
    return 0;
}