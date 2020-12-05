#include <iostream>
#include <ctime>    
#include <cstdlib> 
using namespace std;
class math {
public:
	int num1, num2, result;
	void add(int x), sub(int x), div(int x), mult(int x);
};
int main()
{
	int choice;
	math question;
	cout << "Math Partice!" << endl;
	cout << "Choose a mode:" << endl;
	cout << "1.Addition" << " 2.Subtraction" << " 3.Divison" << " 4.Multplication" << endl;
	cin >> choice;
	if (choice == 1)
	{
		question.add(choice);
	}
	else if (choice == 2)
	{
		question.sub(choice);
	}
	/*else if (choice == 3)
	{
		question.div(choice);
	}
	else if (choice == 4)
	{
		question.mult(choice);
	}*/
	system("Pause");
	return 0;
}
void math::add(int x)
{
	int num1, num2, ans, question = 0;
	double c = 0, w = 0;
	cout << "How many question would you like to challenge?" << endl;
	cin >> question;
	srand(time(NULL));
	for (int i = 0; i < question; i++)
	{
		num1 = rand() % 100 + 1;//first
		num2 = rand() % 100 + 1;//second
		cout << num1 << "+" << num2 << "=";
		cin >> ans;
		int a = num1 + num2;
		if (ans == a)
		{
			c++;
		}
		else
		{
			w++;
		}
	}
	double rate = (c / question) * 100;
	cout << "The correct rate is: " << rate << "%" << endl;
}
void math::sub(int y)
{
	int num1, num2, ans, question = 0;
	double c = 0, w = 0;
	cout << "How many question would you like to challenge?" << endl;
	cin >> question;
	for (int i = 0; i < question; i++)
	{
		srand(time(NULL));
		num1 = rand() % 100 + 1;//first
		num2 = rand() % 100 + 1;//second
		while (num1 >= num2)// avoid the answer becomes negative
		{
			cout << num1 << "-" << num2 << "=";
			cin >> ans;
			int a = num1 - num2;
			if (ans == a)
			{
				c++;
			}
			else 
			{
				w++;
			}
			break;
		}
		}
	double rate = (c / question) * 100;
	cout << "The correct rate is: " << rate << "%" << endl;
}
void math::mult(int z)
{
	int num1, num2, ans, question = 0;

}