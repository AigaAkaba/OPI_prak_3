#include <iostream>
#include "output.h"
using namespace std;

/**
 * @brief Функція формування та виведення результату на екран
 */
void printResult(double result, int choice) {
    if (choice == 1) {
        cout << "Result: " << result << " USD\n";
    } else if (choice == 2) {
        cout << "Result: " << result << " UAH\n";
    } else {
        cout << "Error: invalid number of direction\n";
    }
}