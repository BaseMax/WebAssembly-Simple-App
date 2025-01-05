#include <stdio.h>
#include <stdlib.h>

int calculate(int num1, int num2, int operation) {
    int result;

    switch (operation) {
        case 0:  // Addition
            result = num1 + num2;
            break;
        case 1:  // Subtraction
            result = num1 - num2;
            break;
        case 2:  // Multiplication
            result = num1 * num2;
            break;
        case 3:  // Division
            if (num2 == 0) {
                printf("Error: Division by zero.\n");
                return -1;
            }
            result = num1 / num2;
            break;
        default:
            printf("Invalid operation. Use 0 for add, 1 for subtract, 2 for multiply, 3 for divide.\n");
            return -1;
    }

    return result;
}

int calculate_wrapper(int num1, int num2, int operation) {
    return calculate(num1, num2, operation);
}
