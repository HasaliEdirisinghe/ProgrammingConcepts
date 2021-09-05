#include <iostream>
using namespace std;

//Revise your program from question 1 so that now it computes only the average of those input items that are greater than 10. 

int main() 
{
	//create variables
    int N; 	
	int i, count=0;
    float average, sum=0, value;

	//prompt user inputs for N
    cout << "Enter numbers for N: " ;
    cin >> N;
    
    //prompt user inputs iteratively
	for (i=0; i<N; i++)
	{
		cout << "Please enter a number: " ;
		cin >> value;
		
		//if statement for calculate sum of numbers greater than 10
		if (value > 10)
		{
			sum = sum + value;	
			count++ ;
		}
		
	}
    
	//Calculate the average 
    average = sum / count;
    //display average
    cout << "Average = " << average << endl;
    return 0;
}
