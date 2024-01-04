#include <iostream>
using namespace std;

int MainMenu();
int InputData();
int Multiplication();
int Division();
int Addition();
int Subtraction();

int main()
{
	int val1, val2, options;
	char continueChoice = 'y';

	do
	{
		do
		{
			options = MainMenu();
			switch (options)
			{
			case 1:
				Multiplication();
				break;

			case 2:
				Division();
				break;

			case 3:
				Addition();
				break;

			case 4:
				Subtraction();
				break;

			default:
				cout << "User Input Incorrect\n\n";
				break;
			}
		}
		while (options < 0 || options > 5);

		cout << "Do you want to Contninue [y/n]:";
		cin >> continueChoice;

		system("cls");
	}
	while (continueChoice == 'y');
}

int MainMenu()
{
	int options;

	cout
		<< "Choose [1] for Multiplication [2] Division [3] Addition [4] Subtraction:\n";
	cin >> options;

	system("cls");

	return options;
}

int InputData()
{
	return 0;
}

int Multiplication()
{
	int val1, val2;

	cout << "Input value 1 to multiply:";
	cin >> val1;
	cout << "Input value 2 to multiply:";
	cin >> val2;

	system("cls");

	cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
}

int Division()
{
	int val1, val2;

	cout << "Input value 1 to divide:";
	cin >> val1;
	cout << "Input value 2 to divide:";
	cin >> val2;

	system("cls");

	cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n";
}

int Addition()
{
	int val1, val2;

	cout << "Input value 1 to add:";
	cin >> val1;
	cout << "Input value 2 to add:";
	cin >> val2;

	system("cls");

	cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
}

int Subtraction()
{
	int val1, val2;

	cout << "Input value 1 to subtract:";
	cin >> val1;
	cout << "Input value 2 to subtract:";
	cin >> val2;

	system("cls");

	cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
}
