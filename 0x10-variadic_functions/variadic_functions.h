#ifndef UNTITLED_VARIADIC_FUNCTIONS_H
#define UNTITLED_VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
* struct arg - structure for print several types
* @op: operation name
* @f: function pointer to print
*
* Description: Longer description
*/
typedef struct arg
{

	char *op;
	void (*f)(va_list ap);
} op_;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _strlen(const char *s);
void printc(va_list ap);
void printi(va_list ap);
void printfl(va_list ap);
void prints(va_list ap);
#endif /*UNTITLED_VARIADIC_FUNCTIONS_H*/
