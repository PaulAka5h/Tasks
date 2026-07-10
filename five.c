// displays a line of text

#include <stdio.h>

int main()
{
    char buffer[1000];

    printf("Enter your name: ");
    scanf("%c", &buffer);

    printf("Returning your name: %c", buffer);
}
