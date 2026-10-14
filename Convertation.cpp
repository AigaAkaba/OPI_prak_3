#include "convertation.h"

double convertCurrency(int choice, double value) {
    const double USD_RATE = 44.93;
    if (choice == 1) {
        return value / USD_RATE;
    } else if (choice == 2) {
        return value * USD_RATE;
    }
    return 0.00;
}