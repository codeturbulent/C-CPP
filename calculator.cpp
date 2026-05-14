#include <iostream>

using namespace std;

int main() {
    int num1; 
    char operation; 
    int num2;
    double result; 

    cout << "This is a calculator. It can perform basic operations like:\n"
         << "1. Addition : +\n"
         << "2. Subtraction : -\n"
         << "3. Division : /\n"
         << "4. Multiplication : *\n";

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter the operator : ";
    cin >> operation;  
    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '/':
        if(num2 == 0 ){
            cout << "cant devide by 0";
            break;
        } 
        result = num1/num2;
        break;
        case '*':
        result = num1*num2;
        break;
        case '+':
        result = num1+num2;
        break;
        case '-':
        result = num1-num2;
        break;
        default:
        cout << "Error: Invalid operation." << endl;
    }
    cout << " The result is " << result << '\n' ;
    return 0;
}