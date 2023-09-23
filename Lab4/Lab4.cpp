// Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}

// Completed. Finds and prints out the factorial chosen.
void factorial() {

	int n;
	int factor = 1;

	cout << "You have chosen:" << '\n' << "\tFactorial" << endl;
	
	// If number is less than  or equal to 0, get input again.
	do {
		cout << "Please enter a positive number: ";
		cin >> n;
		if (n > 0) {
			break;
		}
		else if (n <= 0) {
			cout << "Invalid number detected. Try again: ";
			cin >> n;
		}
	} while (n <= 0);

	// If number is greater than 0, while i <= n, add 1. 
	for (int i = 1; i <= n; i++) {
		factor *= i;			
		
		// If i is not equal to chosen number, print i and *.
		if (i != n)
			cout << i << " * ";

		// If i is equal to chose number, print the number, =, and the factorial.
		else
			cout << n << " = " << factor << endl;

	}
}

// Completed. Calculates arthmetic.
void arithmetic() {

	int startingNumber;
	int difference;
	int elementAmount;
	int arithSum = 0;

	// Gets starting number.
	cout << "You have chosen:" << '\n' << "\tArithmetic" << endl;
	cout << "Please enter the starting number: ";
	cin >> startingNumber;

	// Gets difference.
	cout << "Please enter the amount to add each time: ";
	cin >> difference;

	// If number is less than or equal to 0, get input again.
	do {
		cout << "Please enter the amount of elements in the series: ";
		cin >> elementAmount;
		if (elementAmount > 0) {
			break;
		}
		else if (elementAmount <= 0) {
			cout << "Invalid number detected. Try again: ";
			cin >> elementAmount;
		}
	} while (elementAmount <= 0);

	// Loop and calculation for arithmetic.
	for (int i = 0; i < elementAmount; i++) {
		int series = startingNumber + i * difference;
		arithSum += series;

		// Printing out the + in-between each number.
		if (i != 0) {				
				cout << " + ";
		}
		// Printing out the number the current iteration is on after difference is taken.
		cout << series;
	}
	// Printing out the equal sign and sum.
	cout << " = " << arithSum << endl;
}

	
	void geometric() {
	// I recommend writing your geometric series code here
}

// Completed. Declares invalid selection and restarts program.
void invalid() {
	cout << "Invalid selection. ";
}

int main() {
	int choice;
	char again;

	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			invalid();
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;

	} while (again == 'y' || again == 'Y');
}