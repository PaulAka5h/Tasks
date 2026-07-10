// read two integers and display sum, sub, div, mul, remainder.

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter your two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("sum = %d\n", num1 + num2);
    printf("sub = %d\n", num1 - num2);
    printf("mul = %d\n", num1 * num2);
    printf("div = %lf\n", num1 / (float)num2);
    printf("rem = %d\n", num1 % num2);
}