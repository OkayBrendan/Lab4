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

void factorial() {

	int n;
	int factor = 1;

	cout << "You have chosen:" << '\n' << "Factorial" << endl;
	cout << "Please enter a positive number: ";
	cin >> n;

	// If number is less than 0, get input again.
	if (n < 0)
		cout << "Invalid number detected. Try again: ";

	// If number is greater than 0, while i <= n, add 1. 
	else {
		for (int i = 1; i <= n; i++) {
			factor *= i;

			// If i is not equal to chosen number, print i and *.
			if (i != n)
				cout << i << "*";
			// If i is equal to chose number, print the number, =, and the factorial.
			else 
				cout << n << "=" << factor << endl;
		
		}
	}
}

void arithmetic() {
	// I recommend writing your arithmetic series code here
}

void geometric() {
	// I recommend writing your geometric series code here
}

// Completed. Declares invalid selection and loops back.
void invalid() {
	cout << "Invalid selection. Try again." << endl;
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