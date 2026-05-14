#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    // int a = 10;
    // int b = 20;
    // int c = b;
    // a = c;
    // b = a;
    // cout << a << b << endl;

    // int x = 10;
    // x = x + 5;
    // int y = x++;
    // cout << x << endl;
    // cout << "hello world" << endl;

    // int m = (x + 10) / (3 * y);
    // cout << m << endl;

    // int salses = 98000;
    // float country_tax = salses * 0.04;
    // float state_tax = salses * 0.02;

    // cout<< country_tax << " " << state_tax << endl; 
    
    // int userval ; 
    // int userval2;
    // cout << "Enter a value of x and y : ";
    // cin >> userval >> userval2;
    // cout << "You entered: " << userval << " " << userval2 << endl;
    // float celsius;
    // cout << "Welcome to the Celcius to Fahranite converter " << endl;
    // cout << "enter the celcius value : " ;
    // cin >> celsius;
    // float fahranite = (celsius * 9/5) + 32;


    // cout << " The Farhanite Value is : " << fahranite << endl; 

    // double num = ceil(22.65);
    // cout << num << endl ;

    // cout << "Welcome to the circle area calculator !" << endl;
    // cout << "enter the radius :";
    // double rad ;
    // const double pi = 3.14;
    // cin >> rad;
    // double area = pow( rad,2 )*pi;
    // cout<< "the Area of the circle is " << area << endl;

    srand(time(0));
    
    int dice = rand() % 6 + 1;
    cout << dice << endl;

    return 0;
}