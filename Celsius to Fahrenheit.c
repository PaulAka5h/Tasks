// Celsius to Fahrenheit

#include <stdio.h>
int main()
{
    float ctemp;

    printf("Enter Temparature in Celsius: ");
    scanf("%f", &ctemp);

    printf("Temparature in Fahrenheit: %f", (9 * ctemp + 160) / 5);
}