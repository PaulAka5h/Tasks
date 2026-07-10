// enter marks of five subjects and calculate total, average and percentage.

#include <stdio.h>

int main()
{
    int mark1, mark2, mark3, mark4, mark5;

    printf("Enter your marks of five subjects to get your result: ");
    scanf("%d %d %d %d %d", &mark1, &mark2, &mark3, &mark4, &mark5);

    printf("Total mark: %d\n", mark1 + mark2 + mark3 + mark4 + mark5);
    printf("Average mark: %d\n", (mark1 + mark2 + mark3 + mark4 + mark5) / 5);
    printf("Pecentage: %lf\n", ((float)(mark1 + mark2 + mark3 + mark4 + mark5) / 500) * 100);

    // percentage = sum of marks/total mark * 100%
}