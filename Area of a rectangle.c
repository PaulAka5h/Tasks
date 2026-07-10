// Area of a rectangle

#include <stdio.h>

int main()
{
    float lenght, width;

    printf("Enter lenght and width of your rectangle: ");
    scanf("%f %f", &lenght, &width);

    printf("Area of your rectangle is: %f", lenght * width);
}