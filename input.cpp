#include <iostream>
#include "input.h"
using namespace std;

int getCurrencyChoice() {
    int choice;
    cout << "Select the conversion direction (write 1 or 2):\n";
    cout << "1.  UAH -> USD\n";
    cout << "2.  USD -> UAH\n";
    cin >> choice;
    return choice;
}

double getValue() {
    double val;
    cout << "Enter value: ";
    cin >> val;
    return val;
}