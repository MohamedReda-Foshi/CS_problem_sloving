#include <unistd.h>

void punbr(int n)
{
    char c;

    if (n >= 10)
    {
        punbr(n / 10);
        punbr(n % 10);
    }
    else
    {
        c = n + '0';
        write(1, &c, 1);
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        int j = 0;

        while (argv[1][i])
        {
            while (argv[1][i] == ' ')
            {
                i++;
            }

            if (!argv[1][i])
            {
                break;
            }

            j = i;
            while (argv[1][j] && argv[1][j] != ' ')
            {
                j++;
            }

            punbr(j - i);
            write(1, ", ", 1);

            i = j;
        }
    }
    else
    {
        write(1, "\n", 1);
        write(1, "f", 1);
    }

    return 0;
}