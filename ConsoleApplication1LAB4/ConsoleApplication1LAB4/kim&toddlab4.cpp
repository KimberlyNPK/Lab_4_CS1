// main.cpp - simple C++ entry point
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	string foodName;
	char itemCode;
	int itemQuantity;
	double unitPrice;
	bool isMember;
	cout << "Enter the name of the food item: " << endl;
	getline(cin, foodName);
	cout << "Enter the item code (A,B....Z) : " << endl;
	cin >> itemCode;
	//Anything more than one letter will skip code
	cout << "Enter the item quantity : " << endl;
	cin >> itemQuantity;
	cout << "Enter the unit price : " << endl;
	cin >> unitPrice;
	double subTotal = itemQuantity * unitPrice;
	cout << "Is the customer a member? (1 for yes, 0 for no) : " << endl;
	cin >> isMember;
	double discount = 0.1 * subTotal * isMember; // 10% discount
	cout << "Your Subtotal is: " << "$" << subTotal - discount << endl;
	
	cout << fixed << setprecision(2);
	cout << "\n";
	cout << left<<setw(20)<<"receipt" << endl; 
	cout << "\n";
	cout << left << setw(20) << "Food Item: " << foodName << endl;
	cout << left << setw(20) << "Item Code: " << itemCode << endl;
	cout << left << setw(20) << "Item Quantity: " << itemQuantity << endl;
	cout << left << setw(20) << "Unit Price:" << right << setw(1) << "$" << unitPrice << endl;
	cout << left << setw(20) << "Subtotal:" << right << setw(1) << "$" << subTotal - discount << endl;
	cout << left << setw(20) << "Discount:" << right << setw(1) << "$" << discount << endl;

}
