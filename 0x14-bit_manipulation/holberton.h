#ifndef Holberton_h
#define Holberton_h

#include <stdlib.h>
int _putchar(char c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
unsigned int binary_to_uint(const char *b);
int clear_bit(unsigned long int *n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
#endif
