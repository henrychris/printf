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
char *conv_binary(unsigned int num);
int print_binary(unsigned int num);
int print_unsigned(unsigned int num);
char *convert_ui_to_str(unsigned int num);
int print_S(char *str);
int print_pointer_address(void *p);
#endif /* MAIN_H */
