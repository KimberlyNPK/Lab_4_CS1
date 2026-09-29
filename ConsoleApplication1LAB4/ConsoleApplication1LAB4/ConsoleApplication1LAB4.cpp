// main.cpp - simple C++ entry point
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{

	string foodName;
	string notes;
	char itemSize;
	char itemChoice;
	int itemQuantity;
	double unitPrice;
	bool isMember;

	
	//MENU TABLE

	cout << fixed << setprecision(2);
	cout << "\n";
	cout << left << setw(20) << "MENU: RESTAURANT Minty MegaMart" << endl;
	cout << "\n";

	cout << left << setw(20) << "Food Item"
		<< setw(12) << "Item Code"
		<< setw(12) << "Small"
		<< setw(12) << "Medium"
		<< setw(12) << "Large" << endl;

	cout << left << setw(20) << "Pizza"
		<< setw(12) << "P"
		<< setw(12) << "$8.20"
		<< setw(12) << "$10.50"
		<< setw(12) << "$14.00" << endl;

	cout << left << setw(20) << "Burger"
		<< setw(12) << "B"
		<< setw(12) << "$5.45"
		<< setw(12) << "$6.55"
		<< setw(12) << "$7.55" << endl;

	cout << left << setw(20) << "Fries"
		<< setw(12) << "F"
		<< setw(12) << "$2.25"
		<< setw(12) << "$3.25"
		<< setw(12) << "$4.25" << endl;

	cout << left << setw(20) << "Sushi"
		<< setw(12) << "Q"
		<< setw(12) << "$5.38"
		<< setw(12) << "$7.27"
		<< setw(12) << "$9.53" << endl;

	cout << left << setw(20) << "Coke"
		<< setw(12) << "C"
		<< setw(12) << "$1.25"
		<< setw(12) << "$2.25"
		<< setw(12) << "$3.25" << endl;

	cout << left << setw(20) << "Water"
		<< setw(12) << "W"
		<< setw(12) << "$0.00"
		<< setw(12) << "$0.50"
		<< setw(12) << "$1.00" << endl;

	cout << "\n";

	//USER INPUT

	cout << "Choose The code of the food you want (A,B....Z) : " << endl;
	cin >> itemChoice;
	if (itemChoice == 'P' || itemChoice == 'p')
	{
		foodName = "Pizza";
		cout << "You selected Pizza." << endl;

		cout << "Choose a size (S,M,L) : " << endl;
		cin >> itemSize;
		switch (itemSize)
		{
		case 'S':
		case 's':
			unitPrice = 8.20;
			break;
		case 'M':
		case 'm':
			unitPrice = 10.50;
			break;
		case 'L':
		case'l':
			unitPrice = 14.00;

		}
	}

	else if (itemChoice == 'B' || itemChoice == 'b')
	{

		foodName = "Burger";
		cout << "Choose a size (S,M,L) : " << endl;
		cin >> itemSize;
		switch (itemSize)
		{
		case 'S':
		case 's':
			unitPrice = 5.45;
			break;
		case 'M':
		case 'm':
			unitPrice = 6.55;
			break;
		case 'L':
		case'l':
			unitPrice = 7.55;
		}
	}

	else if (itemChoice == 'F' || itemChoice == 'f')
	{

		foodName = "Fries";
		cout << "Choose a size (S,M,L) : " << endl;
		cin >> itemSize;
		switch (itemSize)
		{
		case 'S':
		case 's':
			unitPrice = 2.25;
			break;
		case 'M':
		case 'm':
			unitPrice = 3.25;
			break;
		case 'L':
		case'l':
			unitPrice = 4.25;
		}
	}

	else if (itemChoice == 'Q' || itemChoice == 'q')
	{

		foodName = "Sushi";
		cout << "Choose a size (S,M,L) : " << endl;
		cin >> itemSize;
		switch (itemSize)
		{
		case 'S':
		case 's':
			unitPrice = 5.38;
			break;
		case 'M':
		case 'm':
			unitPrice = 7.27;
			break;
		case 'L':
		case'l':
			unitPrice = 9.53;
		}
	}

	else if (itemChoice == 'C' || itemChoice == 'c')
	{

		foodName = "Coke";
		// this user input calls for the size of the item in small, medium, or large. The price is then calculated based on the size selected.
		cout << "Choose a size (S,M,L) : " << endl;
		cin >> itemSize;
		switch (itemSize)
		{
		case 'S':
		case 's':
			unitPrice = 1.25;
			break;
		case 'M':
		case 'm':
			unitPrice = 2.25;
			break;
		case 'L':
		case'l':
			unitPrice = 3.25;
		}
	}

	else if (itemChoice == 'W' || itemChoice == 'w')
	{

		foodName = "Water";
		cout << "Choose a size (S,M,L) : " << endl;
		cin >> itemSize;
		switch (itemSize)
		{
		case 'S':
		case 's':
			unitPrice = 0.00;
			break;
		case 'M':
		case 'm':
			unitPrice = 0.50;
			break;
		case 'L':
		case'l':
			unitPrice = 1.00;
		}
	}
	else
	{
		cout << "invalid choice, please choose a letter from the menu." << endl;
		exit(EXIT_SUCCESS);
	}

	// Calculate subtotal and total with discount
	
	cout << "Enter the item quantity : " << endl;
	cin >> itemQuantity;
	double subTotal = itemQuantity * unitPrice;
	cout << "You selected " << itemQuantity << " of " << foodName << " it is : " << "$" << subTotal << endl; // display the subtotal with the quantity and the food item name

	cout << "Is the customer a member? (1 for yes, 0 for no) : " << endl;
	cin >> isMember;
	double discount = 0.1 * subTotal * isMember; // 10% discount
	cout << "Your  final total is: " << "$" << subTotal - discount << endl;
	cout << "Enter time purchased and cashier notes: " << endl; //enter any time, the program fills in the rest!
	cin.ignore();
	getline(cin, notes);



	cout << fixed << setprecision(2);
	cout << "\n";

	cout << left << setw(20) << "Receipt - RESTAURANT Minty MegaMart" << endl;
	cout << "\n";

	cout << left << setw(20) << "Food Item: " << foodName << endl;
	cout << left << setw(20) << "Item Size: " << itemSize << endl;
	cout << left << setw(20) << "Item Quantity: " << itemQuantity << endl;
	cout << left << setw(20) << "Unit Price:" << right << setw(1) << "$" << unitPrice << endl;
	cout << left << setw(20) << "Subtotal:" << right << setw(1) << "$" << subTotal << endl;
	cout << left << setw(20) << "Discount:" << right << setw(1) << "-$" << discount << endl;
	cout << left << setw(20) << "Total:" << right << setw(1) << "$" << subTotal - discount << endl;

	cout << "\n";
}



