#ifndef _SAMPLE_HEADER_H_
#define _SAMPLE_HEADER_H_

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
unsigned int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
#endif /* _SAMPLE_HEADER_H_ */
