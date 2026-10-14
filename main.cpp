#include "input.h"
#include "convertation.h"
#include "output.h"

int main() {
    int choice = getCurrencyChoice();
    double val = getValue();
    
    double result = convertCurrency(choice, val);
    
    printResult(result, choice);
    
    return 0;
}