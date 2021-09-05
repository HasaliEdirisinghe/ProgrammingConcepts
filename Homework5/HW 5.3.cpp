#include <iostream>
#include <math.h> //to find square-root(sqrt) and power(pow)
using namespace std;

//function to calculate the distance between two points
double distance(int x1, int y1, int x2,int y2)
{
  	double r = sqrt( (pow(x2-x1,2)) + (pow(y2-y1,2)) ); 	//using pythagoras theorem to calculate r
  	return r;
}

int main() 
{
	//variables
	double x1, y1, x2, y2;
	
	//get user inputs and assign them
  	cout << "Enter x1: ";
  	cin >> x1;
   	cout << "Enter y1: ";
  	cin >> y1;
   	cout << "Enter x2: ";
  	cin >> x2;
   	cout << "Enter y2: ";
  	cin >> y2;
	  
	//call the function
  	double d = distance(x1,y1,x2,y2);
  	
  	//Display distance
  	cout << "Distance between the 2 points is: " << d ;
        
	return 0;
} 

