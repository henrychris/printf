Examples
========

Here are some examples of how to use the custom printf function:

.. code-block:: c

   #include "main.h"

   int main(void)
   {
       _printf("Character: %c\n", 'H');
       _printf("String: %s\n", "Hello, world!");
       _printf("Integer: %d\n", 42);
       _printf("Negative integer: %i\n", -42);
       _printf("Unsigned: %u\n", 42);
       _printf("Octal: %o\n", 42);
       _printf("Hexadecimal (lowercase): %x\n", 42);
       _printf("Hexadecimal (uppercase): %X\n", 42);
       _printf("Percent sign: %%\n");
       _printf("Pointer: %p\n", (void *)0x7ffe637541f0);

       return (0);
   }