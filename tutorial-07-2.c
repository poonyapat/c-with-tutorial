#include <stdio.h>

// switch-case
// use selected value to check if it's fit the case
// selected value must be integer (char can be integer too)
int main() {
    int op1, op2;
    char operator;

    scanf("%d%c%d", &op1, &operator, &op2);

    switch(operator) {
        case '+' :  printf("%d %c %d = %d\n", op1, operator, op2, op1 + op2);
                    break;
        case '-' :  printf("%d %c %d = %d\n", op1, operator, op2, op1 - op2);
                    break;
        case '*' :  printf("%d %c %d = %d\n", op1, operator, op2, op1 * op2);
                    break;
        // for case '/' we must care about the result of division
        case '/' :  printf("%d %c %d = %.2f\n", op1, operator, op2, (float) op1 / op2);
                    break;
        default  :  printf("Unknown operator");
    }
}