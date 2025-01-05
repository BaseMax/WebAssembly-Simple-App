#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: <num1> <num2> <operation (0 for add, 1 for subtract, 2 for multiply, 3 for divide)>\n");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int operation = atoi(argv[3]);
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
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("Invalid operation. Use 0 for add, 1 for subtract, 2 for multiply, 3 for divide.\n");
            return 1;
    }

    printf("Result: %d\n", result);
    return 0;
}
