#include <stdio.h>

int main()
{
    char input[256], i;
    fgets(input, 255, stdin);
    for (i = 0; input[i] != '.'; ++i)
    {
        printf("%c", input[i]);
    }
    ++i;
    printf(" | ");
    for (; input[i] != '\0'; ++i)
    {
        printf("%c", input[i]);
    }
}