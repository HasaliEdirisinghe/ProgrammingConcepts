#include <iostream>
using std::cin;
using std::cout;
using std::ios;
using std::endl;

#include <string>
using std::string;

#include <cstdlib>

int main()
{
	int purchase; 	// amount of purchase
	int tendered; 	// amount of cash tendered
	int change;		// amount of change to be given to customer
	
	cout << "Enter purchased amount: " << endl;		// get user input for the amount of purchase
	cin >>  purchase;								// assign the user input amount of purchase to varibale 'amount'
	cout << "Enter tendered amount: " << endl;		// get user input for the amount of cash tendered
	cin >> tendered;								// assign the user input amount of purchase to varibale 'tendered'
	
	change = tendered - purchase;	//calculate change
	cout << "Change is Rs.";		//display amount of change
	cout << change ;
	
	//declaring variables to calculate the number of notes and bills to dispense
	int fiveThousand, ftMod;	
	int twoThousand, ttMod;
	int oneThousand, otMod;
	int fiveHundred, fhMod;
	int oneHundred, ohMod;
	int fifty, fiftyMod;
	int twenty, twentyMod;
	int ten, tenMod;
	int five, fiveMod;
	int two, twoMod;
	int one, oneMod;
	
	//calculating the number of notes and coins to dispense
	//Here, the division calculates the the number of nots or coins. Modulo calculates the amount leftover
	fiveThousand = change / 5000;
	ftMod = change % 5000;
	twoThousand = ftMod / 2000;
	ttMod = ftMod % 2000;
	oneThousand = ttMod / 1000;
	otMod = ttMod % 1000;
	fiveHundred = otMod / 500;
	fhMod = otMod % 500;
	oneHundred = fhMod / 100;
	ohMod = fhMod % 100;
	fifty = ohMod / 50;
	fiftyMod = ohMod % 50;
	twenty = fiftyMod / 20;
	twentyMod = fiftyMod % 20;
	ten = twentyMod / 10;
	tenMod = twentyMod % 10;
	five = tenMod / 5;
	fiveMod = tenMod % 5;
	two = fiveMod / 2;
	twoMod = fiveMod % 2;
	one = twoMod / 1;
	oneMod = twoMod / 1;
	
	//Display the number of notes and coins to dispense
	cout << "\nNumber of Rs.5000 notes: ";
	cout << fiveThousand;
	cout << "\nNumber of Rs.2000 notes: ";
	cout << twoThousand;
	cout << "\nNumber of Rs.1000 notes: ";
	cout << oneThousand;
	cout << "\nNumber of Rs.500 notes: ";
	cout << fiveHundred;
	cout << "\nNumber of Rs.100 notes: ";
	cout << oneHundred;
	cout << "\nNumber of Rs.50 notes: ";
	cout << fifty;
	cout << "\nNumber of Rs.20 notes: ";
	cout << twenty;
	cout << "\nNumber of Rs.10 coins: ";
	cout << ten;
	cout << "\nNumber of Rs.5 coins: ";
	cout << five;
	cout << "\nNumber of Rs.2 coins: ";
	cout << two;
	cout << "\nNumber of Rs.1 coins: ";
	cout << one;
	
	
	return 0;
}
