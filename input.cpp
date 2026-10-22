#include <iostream>
#include "input.h"
using namespace std;

/**
 * @brief Функція вибору напрямку конвертації
 * Запобігає збоям програми, якщо користувач вводить літери замість числа
 */
int getCurrencyChoice() {
    int choice;
    while (true){
        cout << "Select the conversion direction (write 1 or 2):\n";
        cout << "1.  UAH -> USD\n";
        cout << "2.  USD -> UAH\n";
        cin >> choice;

        // Перевірка на помилку введення
        if (cin.fail() || (choice != 1 && choice != 2)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Choose 1 or 2 according to the menu\n";
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return choice;
        }
    }
    return choice;
}

/**
 * @brief Функція запиту та перевірки суми грошей
 */
double getValue() {
    double val;
    while (true) {
        cout << "Enter the value to convert: ";
        cin >> val;
        
        // Перевірка на помилку введення
        if (cin.fail() || val < 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter a valid positive number\n";
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return val;
        }
    }
}