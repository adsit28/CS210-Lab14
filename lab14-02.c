/** lab14-02.c
* ===========================================================
* Name: 
* Section:
* Project: Lab 14
* Purpose: Introduction to Pointers
* ===========================================================
*/

#include <stdio.h>
#include <math.h>
#include "lab14functs.h"

int main() {
    int cents = 0;
    int quarters = 0;
    int dimes = 0;
    int nickles = 0;
    int pennies = 0;
    
    scanf("%d", &cents);
    makeChange(cents, &quarters, &dimes, &nickles, &pennies);
    printf("quarters: %d, dimes: %d, nickels: %d, pennies: %d\n", quarters, dimes, nickles, pennies);
    return 0;
    
}