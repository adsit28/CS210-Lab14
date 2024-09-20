/** lab14functs.c
* ===========================================================
* Name: 
* Section:
* Project: Lab 14
* Purpose: Introduction to Pointers
* ===========================================================
*/

#include <stdio.h>
#include "lab14functs.h"

/** ----------------------------------------------------------
 * @param x first value
 * @param y second value
 * @pre none
 * @post 
 */
void swapPassByValue(int x, int y) {
    printf("----- Running swapPassByValue -----\n");
    printf("before swap: x = %d; y = %d\n", x, y);
 
    // Creates a temporary value
    int temp;

    // Set temp to have the same value as x
    temp = x;

    // Make x have the same value as y
    
    x = y;
    // Make y have the same value as temp
    y = temp;

    printf("after swap: x = %d y = %d\n", x, y);
}

/** ----------------------------------------------------------
 * @param ptrX a pointer to the first value
 * @param ptrY a pointer to the second value
 * @pre none
 * @post 
 */
void swapPassByReference(int* ptrX, int* ptrY) {
    printf("----- Running swapPassByReference -----\n");
    printf("before swap: ptrX = %d; ptrY = %d\n", *ptrX, *ptrY);
 
    // Creates a temporary int variable
    int temp;

    // Set temp to contain the value stored at ptrX
    temp = *ptrX;

    // Set the value stored at ptrX to contain the value stored at ptrY
    *ptrX = *ptrY;

    // Set the value stored at ptrY to contain the value stored in temp
    *ptrY = temp;
    
    printf("after swap: ptrX = %d; ptrY = %d\n", *ptrX, *ptrY);
}

void makeChange(int iny, int* quarts, int* dimes, int* nicks, int* penns){
    *quarts = iny/25;
    iny = iny%25;

    *dimes = iny/10;
    iny = iny%10;

    *nicks = iny/5;
    iny = iny%5;

    *penns = iny/1;
}

//further referenced chatgpt to remind myself what the pointer is doing. Upon seeing examples I was
// able to understand that my inputs could just be the int in which i'm actually taking its location
// or address and modifying that. which is why i don't need to return anything. 