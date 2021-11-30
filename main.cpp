/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Berkay Arslan
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char operation;
    int n1, n2; //First and second numbers
    cout << "Input first number: \n"; //Input first number to use in expression
    cin >> n1;
    cout << "Input second number: \n"; //Input second number to use in expression
    cin >> n2;
    cout << "Input operator(+, -, *, /): \n"; //Choosing what operation
    cin >> operation;

    switch(operation)
    {
        case '+':                                                         
        cout <<"\nThe sum of " <<n1<< " and " <<n2<< " is " << n1+n2; //Finding the sum of the two numbers
        break;
        case '-':
        cout <<"\nThe difference of " <<n1<< " and " <<n2<< " is " << n1-n2; //Finding the difference of the two numbers
        break;
        case '*':
        cout <<"\nThe product of " <<n1<< " and " <<n2<< " is " <<setprecision(2) << fixed << n1*n2; //Finding the product of the two numbers
        break;
        case '/':
        cout <<"\nThe quotient of " <<n1<< " and " <<n2<< " is " <<setprecision(2) << fixed << n1/n2; //Finding the quotient of the two numbers
        break;
        default:
        cout << "\nInvalid input."; //Invalid statement for false input
        break;
    }
}