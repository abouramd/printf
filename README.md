# Custom printf Function Project

## Background Context
In this project, we aim to create our own version of the `printf` function in C. The `printf` function is a widely-used function in C that allows us to print formatted output to the console. Our custom implementation will mimic the behavior of the standard `printf` function.

## Resources
To help us in this task, we can refer to the following resources:
- `printf` man page: The `printf` man page in the terminal provides information about the standard `printf` function in C.

## Requirements
- Editors: We are allowed to use vi, vim, or emacs as our text editors.
- Compiler: Our code will be compiled on Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Newline at the end of files: All our source code files should end with a new line.
- README.md: We must create a README.md file at the root of the project folder to document our work.
- Coding Style: Our code should adhere to the Betty style, and we can use the `betty-style.pl` and `betty-doc.pl` scripts to check it.
- Global variables: We are not allowed to use global variables in our implementation.
- Function Limit: Each file should contain no more than 5 functions to keep the code modular and maintainable.
- Header file: The prototypes of all our functions should be included in the header file named `main.h`.
- Include Guards: We should use include guards in all our header files to prevent multiple inclusions.
- Authorized functions and macros: We are allowed to use the following functions and macros:
    - `write` (man 2 write)
    - `malloc` (man 3 malloc)
    - `free` (man 3 free)
    - `va_start` (man 3 va_start)
    - `va_end` (man 3 va_end)
    - `va_copy` (man 3 va_copy)
    - `va_arg` (man 3 va_arg)

## Compilation
We can compile our code using the following command:
```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```
Note: We should be careful not to push any C file containing a `main` function to the root directory of the project. We can have a separate test folder for our test files with `main` functions.

## Test Example
For testing our custom `printf` function, we can create a `main.c` file like the example shown below:
```c
#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    // More test cases...

    return (0);
}
```

Please note that this is a template for the README.md file. We should update it with actual content and information as we progress with the project. The README.md file should include a detailed explanation of our custom `printf` function, its features, and any edge cases we handle. Additionally, we should include the compilation and testing instructions for other team members working on the project.