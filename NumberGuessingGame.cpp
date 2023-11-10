/*NUMBR GUESSING GAME*/

#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void guess_number(int &num1  , int &diff)
{
	int num2 = 0;
	while (1)
	{
		cout << endl;

		cout << "Enter number to Guess : \t";
		cin >> num2;

		if (num1 > num2)
		{
			cout << "\nYour Guessed Number is greater than original Number\n";
			diff = num1 - num2;
			cout << "Your guessed number and Original number Difference is : " << diff << endl;
		}
		else if (num1 < num2)
		{
			cout << "\nYour Guessed Number is less than original Number\n";
			diff = num2 - num1;
			cout << "Your guessed number and Original number Difference is : " << diff << endl;
		}
		else if (num1 == num2)
		{
			cout << "\nCongrats Your Guess is True\n";
			break;
		}
	}
}

int main()
{
	int num1=0 , diff=0;

	srand(time(0));
	num1 = rand();

	guess_number(num1, diff);

	system("pause>0");
	return 0;
}