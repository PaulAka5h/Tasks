// Area of a triangle

#include <stdio.h>

int main()
{
    float base, height;

    printf("Enter base and height of your triangle: ");
    scanf("%f %f", &base, &height);

    printf("Area of your triangle is: %f", 0.5 * base * height);
}