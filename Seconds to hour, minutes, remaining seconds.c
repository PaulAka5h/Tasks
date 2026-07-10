// seconds to hours, minutes, ramaining seconds

#include <stdio.h>
int main()
{
    int inputseconds;

    printf("Enter time in seconds: ");
    scanf("%d", &inputseconds);

    printf("Hours: %d\n", inputseconds / 3600);
    printf("Minutes: %d\n", (inputseconds % 3600) / 60);
    // printf("Hours: %d\n",(inputseconds % 60) / 60);
    printf("Remaining Seconds: %d\n", (inputseconds % 3600) % 60);
}