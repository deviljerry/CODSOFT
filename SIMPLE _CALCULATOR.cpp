/*SIMPLE CALCULATOR*/

#include <iostream>
using namespace std;

void calculator(float &num1, float &num2, char &operation)
{
    
        if (operation == '+')
        {
           cout << endl;
           cout  << "Addition of two numbers    :\t" << num1 + num2;
           cout << endl;
        }
        else if (operation == '-')
        {
            cout << endl;
            cout << "Subtraction of two nubers :\t"<< num1 - num2;
            cout << endl;
        }
        else if (operation == '*')
        {
            cout << endl;
            cout << "Multiplication of two numbers :\t" << num1 * num2;
            cout << endl;
        }
        else if (operation == '/')
        {
            if (num2 != 0)
            {
                cout << endl;
                cout << "Division of two number  :\t" << num1 / num2;
                cout << endl;
            }
            else
            {
                cout << "\nDivision by zero is not allowed\nre-enter new number \n or change operation\n";
            }
        }
        else
        {
            cout << "\nInvalid operation\n" << endl;
        }
}


int main() 
{
    float num1, num2,choice=0;
    char operation;

    while (choice != 2)
    {
        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;

        cout << "Enter the operation (+, -, *, /): ";
        cin >> operation;

        calculator(num1, num2, operation);

        cout << "\n Want t enter more calculations \n";
        cout << "Press 1 if yess \n  2 if No \n";
        cin >> choice;
        if (choice == 2)
        {
            break;
        }
    }

    system("pause>0");
    return 0;
}