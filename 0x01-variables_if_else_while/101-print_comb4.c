#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */


int main() {
    int i, j, k;
    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 9; j++) {
            for (k = j + 1; k < 10; k++) {
                putchar(i+'0');
                putchar(j+'0');
                putchar(k+'0');
                if (i < 7) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    return 0;
}
