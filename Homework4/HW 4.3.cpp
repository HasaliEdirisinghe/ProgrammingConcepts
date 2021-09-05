#include <iostream>
using namespace std;

// Design a program that reads a value of N and then computes the smallest and the largest numbers in the next N elements of inputs. 

int main() 
{ 
	//variables
	int min,max; 	//for min and max value
	int n, i, num; 	//n-number of elements(N), i-iterates this number of times, num-user input to calculate min and max 
	
	min = INT_MAX; 	//assign maximum value for a int variable type to min
	max = INT_MIN; 	//assign minimum value for a int variable type to max
	 
	//prompt user inputs for N
	cout << "Enter number for N: "; 
	cin >> n; 
	 
	//finding smallest and largest numbers 
	for(i=0; i<n; i++) 
	{ 
		cout << "Please enter a number: " ;
		cin >> num;
		
		if(num>max)	
		{
			max = num; 	
		}
		
		if(num<min)	
		{
			min = num; 
		}
	} 
	 
	 //display smallest and largest numbers 
	cout << "Smallest number = " << min << endl;
	cout << "Largest number = " << max << endl; 
	
} 
