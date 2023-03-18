#include <stdio.h>

int main() {
    char letter = 'a';  // start with 'a'
    while (letter <= 'z') {
        if (letter != 'e' && letter != 'q') {  // skip 'e' and 'q'
            putchar(letter);  // print the letter
        }
        letter++;  // move to the next letter
    }
    putchar('\n');  // print a new line after all the letters are printed
    return 0;
}
