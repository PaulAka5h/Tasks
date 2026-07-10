// Days to years, months, ramaining days

#include <stdio.h>
int main()
{
    int inputdays;

    printf("Enter days: ");
    scanf("%d", &inputdays);

    printf("Years: %d\n", inputdays / 365);
    printf("Months: %d\n", (inputdays % 365) / 30);
    printf("Remaining Days: %d\n", (inputdays % 365) % 30);
}