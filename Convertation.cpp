#include "convertation.h"

/**
 * @brief Функція конвертації валют
 * Містить обробку на випадок передачі невідомого напрямку
 */

double convertCurrency(int choice, double value) {
    const double USD_RATE = 44.93; //фіксований курс

    if (choice == 1){
        return value / USD_RATE;
    } 
    else if (choice == 2) {
        return value * USD_RATE;
    }

    return -1.0;
}