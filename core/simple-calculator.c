#include <stdio.h>
#include <stdlib.h>

#include "simple-calculator.h"


/***********************
* Discription: Simple Calculator
***********************/


/******************
* Function Name: simpleCalculatorInit
* Input: n/a
* Output: Double
* Function Operation: Switch statement for simple arithmetic
******************/

int simpleCalculatorInit() {
    char ch;
    double a, b;

    while (1) {
        printf("Enter an operator (+, -, *, /), "
        "if want to exit press x: ");
        scanf(" %c", &ch);

        if(ch == 'x') {
            return EXIT_SUCCESS;
        }

        printf("Enter two first and second operand: ");
        scanf("%lf %lf", &a, &b);

        switch (ch) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
            break;
        
        default:
            printf(
                "Error! please write a valid operator\n");
            break;
        }

        printf("\n");
    }
    
}