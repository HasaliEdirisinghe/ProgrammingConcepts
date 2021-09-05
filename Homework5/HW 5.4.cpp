#include<iostream>
using namespace std;			
							//X(n) = X(n-1) + X(n-2)

//function
void fibonacci(int n)
{
    int n1=0, n2=1;		//1st and 2nd numbers in fibonacci system are 0 and 1
	int i, temp; 	// i-iterative value, temp-used to swap
		
    if(n==0)	
        return;		//1st value is 0	
    cout << n1 << " ";	//display 1st value
    
    //loop to print the fibonacci sequence upto N
    for(i=1; i<n; i++)
    {
		cout << n2 << " "; 
       	temp = n1 + n2;
       	n1 = n2;
       	n2 = temp;
    }
}

int main()
{
	int N; //number of elements
	
	//get user input
    cout << "Enter value for N: ";
  	cin >> N;
     
    // call the function
    fibonacci(N);
    
    return 0;
} 

