#include <iostream>
using namespace std;

int main()
{
	int val1, val2, options;
	char continueChoice = 'y';

	cout
		<< "Choose [1] for Multiplication [2] Division [3] Addition [4] Subtraction:\n";
	cin >> options;

	system("cls");

	do
	{
		do
		{
			switch (options)
			{
			case 1:

				cout << "Input value 1:";
				cin >> val1;
				cout << "Input value 2:";
				cin >> val2;

				system("cls");

				cout << val1 << " * " << val2 << " = " << val1 * val2;
				break;

			case 2:

				cout << "Input value 1:";
				cin >> val1;
				cout << "Input value 2:";
				cin >> val2;

				system("cls");

				cout << val1 << " / " << val2 << " = " << val1 / val2;
				break;

			case 3:

				cout << "Input value 1:";
				cin >> val1;
				cout << "Input value 2:";
				cin >> val2;

				system("cls");

				cout << val1 << " + " << val2 << " = " << val1 + val2;
				break;

			case 4:

				cout << "Input value 1:";
				cin >> val1;
				cout << "Input value 2:";
				cin >> val2;

				system("cls");

				cout << val1 << " - " << val2 << " = " << val1 - val2;
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
