#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

#include <stdarg.h>

int _printf(const char *format, ...);
void print_char(va_list args);
void print_str(char *str, int *count_ptr);
void convert_num_str(int num, char *str);

#endif
