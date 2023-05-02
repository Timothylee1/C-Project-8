//ifndef (if not defined); if _OPERATION_H_ isn't defined
#ifndef _OPERATION_H_   
#define _OPERATION_H_

typedef unsigned char operation;

#define UNKNOWN (operation)0   //unknown operation is case 0
#define ADDITION (operation)1
#define SUBTRACTION (operation)2
#define MULTIPLICATION (operation)3
#define DIVISION (operation)4
#define DIVISION_INTEGERS (operation)5
#define MODULUS (operation)6

#endif // _OPERATION_H_
//end of if; carries out all the declarations before the endif
