// Character to ASCII value

#include <stdio.h>
int main()
{
    char character;

    printf("Enter any Character: ");
    scanf("%c", &character);

    printf("The value of %c character in ASCII is: %d", character, character);
}