#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int add = num1 + num2;
    int subtract = num1 - num2;
    int multiply = num1 * num2;
    double divide = (double)num1 / num2;
    int modulus = num1 % num2;
    printf("Sum: %d\n", add);
    printf("Difference: %d\n", subtract);
    printf("Product: %d\n", multiply);
    printf("Divide: %.2lf\n", divide);
    printf("Modulus: %d\n", modulus);
    return 0;
}
