#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    printf("\t\t\t*** Calculator ***\n\n");
    printf("\t Operation:\n");
    printf("\t\t+: Addition\n");
    printf("\t\t-: Subtraction\n");
    printf("\t\t*: Multiplication\n");
    printf("\t\t/: Division\n");
    printf("\t\t%%: Modulus\n");

    while (1) {
        printf("Enter First operand: ");
        scanf("%f", &num1);
        printf("Enter Second Operand: ");
        scanf("%f", &num2);
        printf("Enter Operation: ");
        scanf(" %c", &operator);

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("%.1f + %.1f = %.1f\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.1f - %.1f = %.1f\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.1f * %.1f = %.1f\n", num1, num2, result);
                break;
            case '/':
                if (num2 == 0) {
                    printf("Cannot divide by zero.\n");
                } else {
                    result = num1 / num2;
                    printf("%.1f / %.1f = %.1f\n", num1, num2, result);
                }
                break;
            case '%':
                if ((int)num2 == 0) {
                    printf("Cannot perform modulus by zero.\n");
                } else {
                    result = (int)num1 % (int)num2;
                    printf("%.0f %% %.0f = %.0f\n", num1, num2, result);
                }
                break;
            default:
                printf("Invalid Operator. Try Again.\n");
                break;
        }



        printf("Continue?(Y/N):");
        scanf(" %c", &operator);
        if (operator == 'y' || operator== 'Y');
        printf("Thank you For Using the calculator.\n");


    }

    return 0;
}
