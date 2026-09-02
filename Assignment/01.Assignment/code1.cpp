#include <iostream>
using namespace std;

int main(){
    char operation;
    int num1, num2;
    char choice;

    do{
       
        cout << "\nChoose operation: ";
        cin >> operation;

        
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        
        switch (operation){
        case '+':
            cout << "\nResult: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;

        case '-':
            cout << "\nResult: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;

        case '*':
            cout << "\nResult: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;

        case '/':
            if (num2 == 0)
            {
                cout << "\nError: Cannot divide by zero!" << endl;
            }
            else
            {
                cout << "\nResult: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            break;

        default:
            cout << "\nError: Invalid operation!" << endl;
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;

    } 
    while (choice == 'y' || choice == 'Y');
    cout << "\nThank you for using the calculator. Goodbye!" << endl;

    return 0;
}