// By- Nitin Dwivedi  Enrolment- 0901EE201082
// Q.18. Write a program to sort the elements of an Array in ascending order using Bubble sort.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the numbers" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int j = 1;
    while (j < n)
    {
        for (int i = 0; i < n - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
        j++;
    }
    cout << "Your Sorted Array is-: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
