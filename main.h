#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
void print_char(int c);
void print_str(char *str, int *count_ptr);
void print_int(int num, int *count_ptr);
void convert_num_to_str(int num, char *str);
void conv_binary(int num, char *s1, char *s2);
void print_binary(int num, int *count_ptr);

#endif /* MAIN_H */
