#include<iostream>
using namespace std;

//function to calculate power of an integer
void integerPower(int base, int exponent)
{		
    int i=0, answer = 1; //i-iterative value,	answer-base^exponent

	for (i; i<exponent; i++)
    {
	    answer = answer * base;
	}
    cout << base << " ^ " << exponent << " = " << answer;
}

int main()
{
	//variables
	int base, exponent;
	int i;
	
	//get user inputs and assign them
	cout << "Enter integer for base: ";
    cin >> base;
    cout << "Enter positive nonzero integer for exponent: ";
    cin >> exponent;
    
    //check if the exponent is a postive nonzero value
    for(i=0; exponent<=0; i++)
    {
    	cout << "Ivalid Value! Enter positive nonzero integer for exponent: ";
    	cin >> exponent;
	}

	//call the function
    integerPower(base, exponent);

    return 0;
}
