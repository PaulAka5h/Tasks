// Fahrenheit to Celsius

#include <stdio.h>
int main()
{
    float ftemp;

    printf("Enter Temparature in Fahrenheit: ");
    scanf("%f", &ftemp);

    printf("Temparature in Celsius: %f", (5 * ftemp - 160) / 9);
}