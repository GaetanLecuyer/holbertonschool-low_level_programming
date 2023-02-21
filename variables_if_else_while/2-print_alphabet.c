#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void) {
  char c;

  for (c = 'a'; c <= 'z'; c++) {
    putchar(c);
  }

  putchar('\n');

  return 0;
}
