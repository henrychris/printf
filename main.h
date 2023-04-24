#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(int c);
int print_str(char *str);
int print_int(int num);
char *convert_num_to_str(int num);
char* conv_binary(int num);
int print_binary(int num);

#endif /* MAIN_H */
