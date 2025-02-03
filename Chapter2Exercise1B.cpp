/*
File name: Chapter2Exercise1B.cpp
Programmer: Morgan Thorne
Date: Febuary 2025
Rquirement:
Write program that stores the sum of the integers 50 and 100 in variables,
Display the result in console

Revision:
Allow usder to determine what numbers are added.
*/

#include <iostream>
using namespace std;


int main()
{
    int number1;
    int number2; 
    int sum;
    cout << "Please enter your first number: ";
    cin >> number1;
    cout << "Please enter your second number: ";
    cin >> number2
    sum = number1 + number2;
    cout << "The sum of " << number1 << " and " << number2 << " is " << sum << endl;

}

