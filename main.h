#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(int c);
int print_str(char *str);
int get_str_print(char *str, char specifier);
int print_int(int num);
char *convert_num_to_str(int num);
char *conv_binary(unsigned int num);
int print_binary(unsigned int num);
int print_unsgn(unsigned int num);
char *convert_ui_to_str(unsigned int num);
int print_octal(unsigned int num);
char *conv_octal(unsigned int num);
int print_hex(unsigned int num, char specifier);
char *conv_hex(unsigned int num, int upper_case);
char get_hex_char(int c, int upper_case);
char to_upper(char c);
int is_upper(char c);
int print_S(char *str);

#endif /* MAIN_H */
