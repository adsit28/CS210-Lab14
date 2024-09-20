/** lab14-01.c
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

    // These are the two integers we will be swapping
    int aNum;
    int bNum;

    // This is where we get the integer values from the user
    printf("Please enter your class year: ");
    scanf("%d", &aNum);
    printf("Please enter your favorite integer: ");
    scanf("%d", &bNum);

    // Print out the original contents of aNum and bNum (before swapping)
    printf("\nOriginal Numbers:\n");
    printf("aNum = %d, bNum = %d\n\n", aNum, bNum);

    // TODO:  Part 1 - Uncomment this code when you have implemented swapPassByValue
    swapPassByValue(aNum, bNum);
    printf("from main: aNum = %d, bNum = %d\n\n", aNum, bNum);

    // TODO:  Part 2 - Uncomment this code when you have implemented swapPassByReference
    swapPassByReference(&aNum, &bNum);
    printf("from main: aNum = %d, bNum = %d\n\n", aNum, bNum);

    return 0;
}