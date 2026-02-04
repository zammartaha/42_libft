*This project has been created as part of the 42 curriculum by tzammar.*

# Libft - 42 Beirut

## Description
**Libft** is the foundational project of the 42 curriculum. The objective is to create a custom C library that re-implements a variety of standard functions from the C library, as well as additional utility functions.

Since we are often restricted from using standard library functions in future 42 projects, **Libft** serves as our personal "toolbox." Developing this library provides a deep understanding of memory management, pointer manipulation, and the internal workings of standard C functions.

---

## Features
The library is composed of three distinct sections:
* **Standard Libc Functions:** Re-implementations of `memset`, `bzero`, `strlen`, `strlcpy`, `memchr`, `atoi`, etc.
* **Additional Functions:** Non-standard functions useful for string manipulation and memory allocation, such as `ft_substr`, `ft_strjoin`, `ft_split`, and `ft_itoa`.
* **Bonus Functions:** A set of functions dedicated to manipulating linked lists using a custom structure.

---

## Instructions

### Compilation
The project is compiled using a `Makefile` which generates a static library file named `libft.a`.

To compile the mandatory functions:
```bash
make
```
To compile the bonus (linked list) functions:

```bash
make bonus
```
**Cleaning Up**

To remove object files:
```bash
make clean
```
To remove object files and the library:
```bash
make fclean
```
To re-compile everything:
```bash
make re
```
### Usage

To integrate this library into your project, include the header file in your code and link the library during compilation:

Header:

```C
#include "libft.h"
```
Compiling with a project:

```Bash
cc -Wall -Wextra -Werror main.c ./libft/libft.a -o my_program
```

## Resources

### References
* **Linux Manual Pages (man):** Used to cross-reference the expected behavior of standard libc functions. https://man7.org/
* **Makefile Tutorial:** Guidance on creating efficient rules for compilation and dependency management. https://makefiletutorial.com/

### AI Usage
**AI (Gemini) was utilized as a collaborative tool for the following tasks:**
* **Logic Refinement:** Clarifying the expected behavior of ft_strlcat and ft_split regarding edge cases (e.g., null terminators and empty strings).
* **Debugging:** Identifying potential memory leaks in the linked list bonus functions and interpreting Valgrind logs.
* **Documentation:** Assistance in structuring and formatting this README.md to meet the project's professional requirements.