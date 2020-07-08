#ifndef _SAMPLE_HEADER_H_
#define _SAMPLE_HEADER_H_

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int _strlen(char *s);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char *copystr(char *dest, char *source);
#endif /* _SAMPLE_HEADER_H_ */
