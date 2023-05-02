/*!
@file       main.c
@author     Timothy Lee (timothykexin.lee@digipen.edu.sg)
@course     RSE 1201
@section    Laboratory exercise 5
@lab        Lab 5
@date       08/10/2021
@brief      This file contains code of the function main(). It prints out a series of 
			strings to prompt the user of what the program does and the format of the 
			operand symbols as an indicator of different arithmetic operations. It 
			utilizes the standard, calc.h, and operation.h libraries. It checks the 
			validity of the inputs before calling the function calculate() after passing
			the user inputs into its parameters. 
*//*______________________________________________________________________________________*/
#include <stdio.h>
#include "calc.h" //void calculate(float x, float y, operation op);
#include "operation.h"

/*!
@brief  This function main() contains code to check the handle user input, validation, and
		selection of the operation to be performed. It will constantly prompt the user and 
		if the user entered 3 values, it is valid and prompt again, if at least 1 variable 
		was entered, "Invalid number of arguments!" will be printed. If EOF is detected, 
		it will print "Closing the program..." before terminating the program.

@param  c & r is declared as an integer
		a & b are declared as floating points
        p is declared as an unsigned char (operation) as declared in operation.h library

@return Returns integer 0
*//*_______________________________________________________________________________________*/
int main(void)
{
	printf("This program evaluates mathematical expressions.\n");
	printf("The format of an expression is:\n");
	printf("\tOPERAND1 SYMBOL OPERAND2\n");
	printf("Available operation symbols:\n");
	puts("\t+ addition");
	puts("\t- subtraction");
	puts("\t* multiplication");
	puts("\t/ division");
	puts("\t\\ integer division");
	puts("\t% modulus\n");


	float a, b;
	operation p;
	int c;
	while (1) {
		puts("Enter an expression:");
		
		int r = scanf("%f%c%f", &a, &p, &b); 
		if (r == 3) { 
			calculate(a, b, p);
		}
		else if (r == 1 || r == 2) {
			printf("\t\tInvalid number of arguments!\n");
		}
		if ((c = getchar()) == EOF) {break;}
	}
	
	printf("\tClosing the program...\n");
	return 0;
}
