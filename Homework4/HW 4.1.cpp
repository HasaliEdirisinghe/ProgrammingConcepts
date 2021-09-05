#include <iostream>
using namespace std;

// Design a program that reads a value of N and then compute the average of the Next N elements of inputs. 

int main() 
{  
	//create variables
    int N; 	
	int count;
    float average, sum=0.0, value;

	//prompt user inputs for N
    cout << "Enter numbers for N: " ;
    cin >> N;
    
    //prompt user inputs and calculate sum
	for (count=0; count<N; count++)
	{
		cout << "Please enter a number: " ;
		cin >> value;
		sum = sum + value;
		
	}
    
	//Calculate the average 
    average = sum / N;
    //display average
    cout << "Average = " << average << endl;
    return 0;
}
