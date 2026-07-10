// roots of quadratic eqn

#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, discriminant, root1, root2;

    printf("Enter coefficients of quadratic equation: ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = b * b - 4 * a * c;
    if (discriminant == 0)
    {
        printf("Roots are real and equal\n");
        printf("First root is: %d and second root is: %d", root1 = -b / (2 * a), root2 = -b / (2 * a));
    }
    else if (discriminant > 0)
    {
        printf("Roots are real and different\n");
        printf("First root is: %d and second root is: %d", root1 = ((-b) + sqrt(discriminant)) / 2 * a, root2 = ((-b) - sqrt(discriminant)) / 2 * a);
    }
    else
    {
        printf("Roots are imaginary");
    }
}