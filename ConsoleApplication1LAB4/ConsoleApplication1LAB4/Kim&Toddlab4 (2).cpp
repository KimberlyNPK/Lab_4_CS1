// main.cpp - simple C++ entry point
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	string foodName;
	string notes;
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
	cout << "Your total is: " << "$" << subTotal - discount << endl;
	cout << "Enter time purchased and cashier notes: "<< endl; //enter any time, the program fills in the rest!
	cin.ignore();
getline(cin, notes);
	cout << fixed << setprecision(2);
	cout << "\n";
	cout << left<<setw(20)<<"receipt" << endl; 
	cout << "\n";
	cout << left << setw(20) << "Food Item: " << foodName << endl;
	cout << left << setw(20) << "Item Code: " << itemCode << endl;
	cout << left << setw(20) << "Item Quantity: " << itemQuantity << endl;
	cout << left << setw(20) << "Unit Price:" << right << setw(1) << "$" << unitPrice << endl;
	cout << left << setw(20) << "Subtotal:" << right << setw(1) << "$" << subTotal << endl;
	cout << left << setw(20) << "Discount:" << right << setw(1) << "-$" << discount << endl;
	cout << left << setw(20) << "Total:" << right << setw(1) << "$" << subTotal - discount << endl;
cout << "This purchase was made from Minty MegaMart at: " << notes << endl;
cout << "\n";

cout << fixed << setprecision(2);
	cout << setw(30)<<"AUDIT TABLE" << endl; 
	cout << "\n";
	cout << left << setw(15) << "Food Item" << setw(15)<< "Item Code" << setw(15) << "Item Quantity" << setw(15) << "Unit Price" << setw(15) << "Subtotal" << setw(15) << "Discount" << setw(15) << "Total" << endl;
cout << left << setw(15) << foodName << setw(15) << itemCode << setw(15) << itemQuantity << setw(15) << unitPrice << setw(15) << subTotal << setw(15) <<discount << setw(15) << subTotal - discount << endl;

}
