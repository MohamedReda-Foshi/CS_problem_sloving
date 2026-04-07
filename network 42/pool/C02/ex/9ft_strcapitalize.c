#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i = 0;
    while (str[i])
    {
        /* Fix 1: capitalize str[0] once (still inside loop, but only when i==0) */
        if (i == 0 && (str[0] >= 'a' && str[0] <= 'z'))
            str[0] = str[0] - 32;

        /* Fix 2: if current char is NOT alnum => next char starts a new word */
        if (!((str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= '0' && str[i] <= '9')))
        {
            /* Fix 3: remove the wrong '?' check (ASCII 63) and fix the range */
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
                str[i + 1] = str[i + 1] - 32;
        }
        else
        {
            /* Fix 4: inside a word, force letters to lowercase (except first letter) */
            if (i > 0 &&
                ((str[i] >= 'A' && str[i] <= 'Z')) &&
                ((str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
                 (str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
                 (str[i - 1] >= '0' && str[i - 1] <= '9')))
            {
                str[i] = str[i] + 32;
            }
        }

        i++;
    }
    return str;
}

int main(void)
{
    char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n", ft_strcapitalize(s));
    return 0;
}