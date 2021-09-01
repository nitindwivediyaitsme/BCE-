// // // By- Nitin Dwivedi  Enrolment- 0901EE201082
// // // Q.8. Write a program in to create a calculator which is able to perform +, -, *, / using a switch case
// // /* #include <iostream>
// // using namespace std;

// // // Main program
// // int main()
// // {
// // 	char op;
// // 	float num1, num2;

// // 	// Enter operator i.e. +, -, *, /
// //     cout<<"Enter any operator among +,-,*,/ "<<endl;
// // 	cin >> op;

// // 	// It allow user to enter the operands
// //     cout<<"Enter first enter: "<<endl;
// // 	cin >> num1 ;
// //     cout<<"Enter second enter: "<<endl;
// //     cin >> num2;

// // 	// Switch statement begins
// // 	switch (op) {

// // 		// If user enter +
// // 		case '+':
// // 			cout <<"The sum of numbers "<<num1 <<" & "<<num2<<" is "<< num1 + num2;
// // 			break;

// // 		// If user enter -
// // 		case '-':
// // 			cout <<"The substraction of numbers "<<num1 <<" & "<<num2<<" is "<< num1 - num2;
// // 			break;

// // 		// If user enter *
// // 		case '*':
// // 			cout <<"The multiplication of numbers "<<num1 <<" & "<<num2<<" is "<< num1 * num2;
// // 			break;

// // 		// If user enter /
// // 		case '/':
// // 			cout <<"The division of numbers "<<num1 <<" & "<<num2<<" is "<< num1 / num2;
// // 			break;

// // 		// If the operator is other than +, -, * or /,
// // 		// error message will display
// // 		default:
// // 			cout << "Error! operator is not correct";
// // 			break;
// // 	} // switch statement ends

// // 	return 0;
// // }
// // */

// // // C++ code to linearly search x in arr[]. If x
// // // is present then return its location, otherwise
// // // return -1

// // #include <iostream>
// // using namespace std;

// // int search(int arr[], int n, int x)
// // {
// // 	int i;
// // 	for (i = 0; i < n; i++)
// // 		if (arr[i] == x)
// // 			return i;
// // 	return -1;
// // }

// // // Driver code
// // int main(void)
// // {
// // //	int arr[] = { 2, 3, 4, 10, 40 };
// // //	int x = 10;
// // //	int n = sizeof(arr) / sizeof(arr[0]);
// // int n;
// // cin>>n;
// // arr[n];
// // for (int i = 0; i < n; i++)
// // {
// // 	cin>>arr[i];
// // }
// // 	// Function call
// // 	int result = search(arr, n, x);
// // 	(result == -1)
// // 		? cout << "Element is not present in array"
// // 		: cout << "Element is present at index " << result;
// // 	return 0;

// // }

// #include <bits/stdc++.h>

// using namespace std;

// int calculateSum(int n)
// {

// 	if (n <= 0)

// 		return 0;

// 	int fibo[n + 1];

// 	fibo[0] = 0, fibo[1] = 1;

// 	int sum = fibo[0] + fibo[1];

// 	for (int i = 2; i <= n; i++)

// 	{

// 		fibo[i] = fibo[i - 1] + fibo[i - 2];

// 		sum += fibo[i];
// 	}

// 	return sum;
// }

// int main()
// {

// 	int n = 100;

// 	cout << "Sum of Fibonacci numbers is : "

// 		 << calculateSum(n) << endl;

// 	return 0;
// }
#include <iostream>
using namespace std;

int main()
{
	int input[10], i, num;

	cout << "Enter  numbers \n ";

		for (i = 0; i < 10; i++)
	{
		cin >> input[i];
	}

	cout << "Enter a number to serach in Array\n";
	cin >> num;

	for (i = 0; i < 10; i++)
	{
		if (input[i] == num)
		{
			cout << "Element found at index " << i;
			break;
		}
	}
	if (i == 10)
	{
		cout << "Element Not Present in Input Array\n";
	}
	return 0;
}