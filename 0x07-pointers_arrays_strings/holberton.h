#ifndef _SAMPLE_HEADER_H_
#define _SAMPLE_HEADER_H_

#include <stdio.h>

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
void print_chessboard(char (*a)[8]);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
#endif /* _SAMPLE_HEADER_H_ */
