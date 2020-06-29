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
#endif /* _SAMPLE_HEADER_H_ */
