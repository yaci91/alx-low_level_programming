#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n, m, j;

    for (n = 48; n <= 55; n++)
    {
        for (m = n + 1; m <= 56; m++)
        {
            for (j = m + 1; j <= 57; j++)
            {
                putchar(n);
                putchar(m);
                putchar(j);

                if (n != 55 || m != 56 || j != 57)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');
    return (0);
}
