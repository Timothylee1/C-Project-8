/*!
@file       calc.c
@author     Timothy Lee (timothykexin.lee@digipen.edu.sg)
@course     RSE 1201
@section    Laboratory exercise 5
@lab        Lab 5
@date       08/10/2021
@brief      This file contains code for the function calculate() with the inclusion of the
            calc.h and standard library. It holds the definition of function calculate()
            which performs arithmetic operations.
            E.g.
            input: 7.5/2.5
            output: 3.00000
*//*______________________________________________________________________________________*/
#include <stdio.h>
#include "calc.h"

/*!
@brief  The function calculate() uses the switch statement to decide the output on a case 
        by case basis. It performs different arithmetic operations based on the op 
        parameter. The process is easily understood, all cases except for the default 
        returns a float value, unless otherwise specified. For division float, if the 
        denominator (y param) is assigned the value 0, "Division by 0" will be the output 
        and it won't compute the expression. For division integer & modulus, if either the 
        numerator (x param) or denominator is assigned the value 0, "Division by 0" will be
        the output and it won't compute the expression.


@param  x & y are declared as floating points
        op is declared as an unsigned char (operation) as declared in operation.h library

@return Returns nothing
*//*_______________________________________________________________________________________*/
void calculate(float x, float y, operation op) {
    switch (op)  {
        
        case '+': //ADDITION, returns float value
        printf("\t\t%f\n", x+y);
        break;

        case '-': //SUBTRACTION, returns float value
        printf("\t\t%f\n", x-y);
        break;

        case '*': //MULTIPLICATION, returns float value
        printf("\t\t%f\n", x*y);
        break;

        case '/': //DIVISION FLOAT, returns float value
        if (y == 0){
            printf("\t\tDivision by 0!\n");
        } else {
            printf("\t\t%f\n", x/y);
        }   break;

        case '\\': //DIVISION INTEGER, returns float value
        if ((int)x == 0 || (int)y == 0) {
            printf("\t\tDivision by 0!\n");
        } else {
            printf("\t\t%f\n", (float)((int)x / (int)y));
        }   break;

        case '%': //MODULUS, returns float value
        if ((int)x == 0 || (int)y == 0) {
            printf("\t\tDivision by 0!\n");
        } else {
            printf("\t\t%f\n", (float)((int)x % (int)y));
        }   break;

        default: //UNKNOWN
        printf("\t\tUnknown operation selected!\n");
        break;
    }
}


