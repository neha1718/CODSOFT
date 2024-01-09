#include <iostream>

using namespace std;

int main() 
{
    // Declare variables to store user input and result
    double num1, num2, result;
    char operation;

    // Display the menu
    cout << "\n\n---Simple Calculator---\n";
    cout << "\nChoose the operation you want to perform...\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    
    // Ask the user to enter the operation choice
    cout << "Enter the operation number (1-4) from the above menu: ";
    cin >> operation;

    // Ask the user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Perform the selected operation
    switch (operation) 
    {
        case '1':
            result = num1 + num2;
            cout << "The Addition of the above two numbers is: " << result << endl;
            break;
        case '2':
            result = num1 - num2;
            cout << "The Substraction of the above two numbers is: " << result << endl;
            break;
        case '3':
            result = num1 * num2;
            cout << "The Multiplication of the above two numbers is: " << result << endl;
            break;
        case '4':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "The Division of the above two numbers is: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed!." << endl;
            }
            break;
        default:
            cout << "Invalid operation number. \nPlease enter a number between 1 and 4 as mentioned in the operation list." << endl;
    }

    return 0;
}
