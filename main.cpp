#include "input.h"
#include "convertation.h"
#include "output.h"

/**
 * @file main.cpp
 * @brief Головний модуль програми-конвертера валют
 * Керує послідовністю виклику підмодулів введення, обчислення та виведення
 */

int main() 
{
    //Послідовний виклик функцій з підмодулів
    int choice = getCurrencyChoice();
    double val = getValue();
    
    double result = convertCurrency(choice, val);
    
    printResult(result, choice);
    
    return 0;
}