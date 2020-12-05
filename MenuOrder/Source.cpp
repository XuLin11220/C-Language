#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;
class menuItemType
{
public:
	string menuItem;
	double menuPrice;
	int Count;
	void getData();
	void showMenu();
	void printCheck();
};
const double tax = 0.05;
int i = 0, orderitem;
menuItemType menuList[8];
int main()
{
	cout << setprecision(2) << fixed;
	menuList[8].getData();
	menuList[8].showMenu();
	menuList[8].printCheck();
	system("Pause");
	return 0;
}
void menuItemType::getData()
{
	ifstream inData;
	int size = 8;
	inData.open("Menu.txt");
	if (!inData)
	{
		cout << "Error!" << endl;
	}
	for (i = 0; i < size; i++)
	{
		getline(inData, menuList[i].menuItem, '\$');
		inData >> menuList[i].menuPrice;
		inData.ignore(100, '\n');
	}
	inData.close();
}
void menuItemType::showMenu()
{
	int choice = 0, stop = 8, exit = 0, order = 0;
	cout << "Welcome to Chirs's Resturant" << endl;
	for (i = 0; i < stop; i++)
	{
		menuList[i].Count = 0;
	}
	for (i = 0; i < stop; i++)
	{
		cout << i << '.' << menuList[i].menuItem << right << setw(15) << '$'
			<< menuList[i].menuPrice << endl;
	}
	while (exit != 9)
	{
		cout << "Enter the number of the food and the number of that order: ";
		cin >> order;
		cin >> menuList[order].Count;
		cout << "Press any key to continue ordering except press 9 to finsih your order" << endl;
		cin >> exit;
	}
}
void menuItemType::printCheck()
{
	double Tax, total = 0, due = 0;
	cout << "Thanks! Here is your bill." << endl;
	for (int orderitem = 0; orderitem < 8; orderitem++)
	{
		if (menuList[orderitem].Count > 0)
		{
			menuList[orderitem].menuPrice *= menuList[orderitem].Count;
			total += menuList[orderitem].menuPrice;
			cout << menuList[orderitem].Count << " " << menuList[orderitem].menuItem << " "
				<< '$' << menuList[orderitem].menuPrice << endl;
			Tax = menuList[orderitem].menuPrice * tax;
		}
	}
	due = Tax + total;
	cout << "Amount Total: " << '$' << total << endl;
	cout << "Tax: " << '$' << Tax << endl;
	cout << "Amount Due: " << '$' << due << endl;
}
