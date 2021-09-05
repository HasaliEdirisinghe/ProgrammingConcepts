#include <iostream>
#include <bits/stdc++.h> //a header file that includes every standard library
using namespace std;

//Design a program that reads a value of N and then computes the THIRD smallest number in the next N elements of inputs. 

int main()
{
	int N, i;	//N-number of elements(N), i-array index
	
	//prompt user inputs for N
	cout << "Enter number for N: "; 
	cin >> N; 
	
	int arr[N]; 	//define array
	
	//promt user inputs to array
	for(i=0; i<N; i++)
	{
		cout << "Please enter a number: " ;
		cin >> arr[i];
	}
	//output array
	cout << "\nArray: ";
	for(i=0; i<N; i++)
	{
		cout << arr[i] << " ";
	}
	
	//sort the array in ascending order
	int p = sizeof(arr) / sizeof(arr[0]);	// find the point we want the array to be sorted
	sort(arr, arr + p); 					// sorting statement
	//output after sort
	cout << "\nArray after sorting: ";
    for (int i = 0; i < p; ++i)
    {
    	cout << arr[i] << " ";
  	}
	
    //since the 2nd position is the third smallest number...
	cout << "\nThird smallest number is: " << arr[2];    


	return 0;
}
