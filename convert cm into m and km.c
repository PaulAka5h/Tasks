// convert cm into m and km

#include <stdio.h>
int main()
{
    float num;

    printf("Enter your number in Cm: ");
    scanf("%f", &num);

    printf("your number in meter is: %f\n", num / 100);
    printf("your number in kilometer is: %f\n", num / 100000);
}