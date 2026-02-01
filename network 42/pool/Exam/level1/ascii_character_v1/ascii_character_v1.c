#include <stdio.h>

int ascii_character(char c)
{
    return (int)c;
}

int main(void)
{
    printf("%d\n", ascii_character('A'));
    return 0;
}
