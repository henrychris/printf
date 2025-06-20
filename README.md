# Printf Implementation

![C Language](https://img.shields.io/badge/Language-C-blue)
![License](https://img.shields.io/badge/License-MIT-green)
[![Documentation Status](https://readthedocs.org/projects/printf/badge/?version=latest)](https://printf.readthedocs.io/en/latest/?badge=latest)

## Description

This project is a custom implementation of the `printf` function in C, which is used for formatted output. The standard `printf` function in C is powerful but complex, and implementing it from scratch is an excellent exercise in C programming, string manipulation, memory management, and handling variadic functions.

## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Supported Format Specifiers](#supported-format-specifiers)
- [Examples](#examples)
- [Testing](#testing)
- [Contributing](#contributing)
- [Authors](#authors)
- [License](#license)
- [Acknowledgements](#acknowledgements)

## Features

- Custom implementation of the `printf` function
- Handles various format specifiers
- Manages different data types
- Supports width and precision formatting
- Handles flags for formatting options

## Requirements

- GCC compiler
- C standard library
- Make (optional, for building with Makefile)

## Installation

Clone the repository to your local machine:

```bash
git clone https://github.com/Adameelmadani/printf.git
cd printf
```

Compile the project:

```bash
make
```

Or compile manually:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o printf
```

## Usage

Include the header file in your C program:

```c
#include "main.h"
```

Use the custom `_printf` function similar to how you would use the standard printf:

```c
_printf("Hello, %s! The answer is %d.\n", "world", 42);
```

## Supported Format Specifiers

The implementation supports the following format specifiers:

- `%c`: Character
- `%s`: String
- `%d` or `%i`: Signed decimal integer
- `%u`: Unsigned decimal integer
- `%o`: Unsigned octal
- `%x`: Unsigned hexadecimal integer (lowercase)
- `%X`: Unsigned hexadecimal integer (uppercase)
- `%p`: Pointer address
- `%%`: Percent sign

## Examples

Here are some examples of how to use the custom printf function:

```c
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
```

## Testing

To test the implementation, you can use the provided test files:

```bash
make test
```

Alternatively, you can create your own test files to verify specific functionality.

## Project Structure

```
printf/
├── _printf.c           # Main printf implementation
├── main.h              # Header file with function prototypes
├── handle_char.c       # Functions for character handling
├── handle_string.c     # Functions for string handling
├── handle_integer.c    # Functions for integer handling
├── handle_binary.c     # Functions for binary conversion
├── handle_octal.c      # Functions for octal conversion
├── handle_hex.c        # Functions for hexadecimal conversion
├── utils.c             # Utility functions
├── Makefile            # Compilation instructions
└── test/               # Test files
```

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## Authors
- [@Adameelmadani](https://github.com/Adameelmadani)
- [@henrychris](https://github.com/henrychris)

## License

This project is licensed under the MIT License - [MIT License](LICENSE)

## Acknowledgements

- The C Programming Language by Brian Kernighan and Dennis Ritchie
- [printf(3) - Linux manual page](https://man7.org/linux/man-pages/man3/printf.3.html)
