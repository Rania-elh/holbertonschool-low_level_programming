#include <stdio.h>

void print_alphabet(void)  /* Début de la définition de la fonction */
{
    for (char c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }
    putchar('\n');
}
