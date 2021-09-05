#include <iostream>
using namespace std;

//function to compute the greatest common divisor of two integers read from input data. 

void smallestCommonFactor()	//define the function
{
int n1, n2, gcd, scf, i;		//n1,n2 - user input integers , scf-smallest common factor , i-iterator value to find gcd
    
    //getting user inputs and assigning them
	cout << "Input the 1st integer: ";
    cin >> n1;
    cout << "Input the 2nd integer: ";
    cin >> n2;
	
	//calculate scf
	
  	for (i=1; i<=n1 && i<=n2; i++) 			//first calculate gcd
    {
        if (n1%i == 0 && n2%i == 0) 
        {
            gcd = i;
        }
    }
    scf = (n1*n2)/gcd;		//then calculate scf using this formula
    
    //display scf
    cout << "Smallest Common Factor: " << scf << endl;
}

int main()
{
    smallestCommonFactor();	//call the function
	return 0;
}
