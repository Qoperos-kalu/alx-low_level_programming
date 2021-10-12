#include "main.h"

/**
 *print_alphabet - prints lowercase alphabet
 *prints letters from a tto z in lower case
 */
void print_alphabet(void)
{
  char n = 'a';

  while (n <= 'z')
    {
      _putchar(n);
      n++;
    }
  _putchar('\n');
}
