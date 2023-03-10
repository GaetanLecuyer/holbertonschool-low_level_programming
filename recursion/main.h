#ifndef MAIN_H
#define MAIN_H

/**
 * File: holberton.h
 * Auth: Brennan D Baraban
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x06-pointers_arrays_strings directory.
 */

#include <stddef.h>

int is_prime_number(int n);
int _sqrt_recursion(int n);
int factorial(int n);
int _putchar(char c);
void *_memset(void *s, int c, size_t n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
int _strlen_recursion(char *s);
unsigned int _strspn(char *s, char *accept);
void _print_rev_recursion(char *s);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
int _pow_recursion(int x, int y);

#endif
