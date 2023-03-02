#ifndef MAIN_H
#define MAIN_H
/**
 * This a header file containing declarations
 * for prototype functions defined in the 0x06-more-functions_nested_loops
 * Inserting the file's content within ifndef, define and endif,
 * entails that the the compiler will not process the file twice if its included twice.
*/
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
int _putchar(char c);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif
