#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2, result;
    //Enter both number and operator 
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

//calculation operation

    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result;
            } else {
                cout << "Error: Division by zero is not allowed!";
            }
            break;
        default:
            cout << "Error: Invalid operator!";
            break;
    }
    cout << endl;
    return 0;
}
