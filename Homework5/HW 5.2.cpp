#include<iostream>
#include <stdio.h> 
using namespace std;			

//function
int timeInSeconds(int hrs, int mins, int s)
{
	return (hrs*60*60 + mins*60 + s);   //convert hours and mins to seconds
}

int main()
{
	//variables
	int hrs1, mins1, s1;
	int hrs2, mins2, s2;
	
	cout << "CALCULATING THE AMOUNT OF TIME IN SECONDS BETWEEN TWO TIMES\n" << endl;
	cout << "Please be careful to enter a valid time within the 12-hour cycle clock! \n" << endl;
	
	//get user inputs for time 1 and assign them to variables
	cout << "Enter time 1 (hours[space]minutes[space]seconds): ";
    cin >> hrs1 >> mins1 >> s1;
    //check the validity of time
    for (int i=0; (hrs1>=12 || hrs1<0) || (mins1>59 || mins1<0) || (s1>59 || s1<0); i++)
    {
    	cout << "Invalid time! \nEnter time 1 (hours[space]minutes[space]seconds): ";
    	cin >> hrs1 >> mins1 >> s1;
	}
	//get user inputs for time 2 and assign them to variables
    cout << "Enter time 2 (hours[space]minutes[space]seconds): ";
    cin >> hrs2 >> mins2 >> s2;
    //check the validity of time    
	for (int j=0; (hrs2>=12 || hrs2<0) || (mins2>59 || mins2<0) || (s2>59 || s2<0); j++)
    {
    	cout << "Invalid time! \nEnter time 2 (hours[space]minutes[space]seconds): ";
    	cin >> hrs2 >> mins2 >> s2;
	}   
    
    //call the function and calculate difference
    int difference = timeInSeconds(hrs1, mins1, s1) - timeInSeconds(hrs2, mins2, s2);
    
    //Display difference
    cout << "\nTime difference is " << abs(difference) << " second(s)";  //abs() is for the absolute value

	return 0;
}

 
    
    
    
