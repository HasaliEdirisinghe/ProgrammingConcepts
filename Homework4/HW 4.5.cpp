#include <iostream>
using namespace std;

// function to compute the greatest common divisor of two integers read from input data. 

void greatestCommonDivisor()	//define the function
{
	int n1, n2, gcd, i;		//n1,n2 - user input integers , gcd-greatest common devisor , i-iterator value to find gcd
    
    //getting user inputs and assigning them
	cout << "Input the 1st integer: ";
    cin >> n1;
    cout << "Input the 2nd integer: ";
    cin >> n2;
	
	//calculate gcd
    for (i=1; i<=n1 && i<=n2; i++) 
    {
        if (n1%i == 0 && n2%i == 0) 
        {
            gcd = i;	
        }
    }
    
    //display gcd
    cout << "Greatest Common Divisor: " << gcd << endl;
}

int main()
{
    greatestCommonDivisor();	//call the function
	return 0;
}
