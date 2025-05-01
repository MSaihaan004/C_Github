#include<stdio.h>
int main()
{
    int num1, num2, execute;
    char op;

    printf("Enter a number : ");
    scanf("%d", &num1);

    printf("Enter an op (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter another number : ");
    scanf("%d", &num2);
    
    if (op == '+') {
        execute = num1 + num2;
        printf("The sum of %d and %d is: %d", num1, num2, execute);
    }
    else if (op == '-') {
        execute = num1 - num2;
        printf("The subtraction of %d and %d is: %d", num1, num2, execute);
    }
    else if (op == '*') {
        execute = num1 * num2;
        printf("The product of %d and %d is: %d", num1, num2, execute);
    }
    else if (op == '/') {
        if (num2 != 0) {
            execute = num1 / num2;
            printf("The division of %d and %d is: %d", num1, num2, execute);
        } else {
            printf("Error: Division by zero is not allowed.");
        }
    }
    else {
        printf("Error: Invalid operator.");
    }

    return 0;
}
  