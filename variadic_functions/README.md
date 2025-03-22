# Variadic functions

A project focused on understanding and implementing variadic functions in C, using macros like `va_start`, `va_arg`, and `va_end`. This README details the learning objectives, scripts, and tasks related to the project.

## 📜 Table of contents

* [Learning objectives](#-Learning-objectives)
* [Scripts](#-Scripts)
	* [Header file](#-Header-file)
	* [Tasks scripts](#-Tasks-scripts)
		* [Mandatory](#-Mandatory)

		  * **0. Beauty is variable, ugliness is constant()**(#0️⃣-beauty-is-variable-ugliness-is-constant)

	      * **1. To be is to be the value of a variable** (#1️⃣-to-be-is-to-be-the-value-of-a-variable)

	      * **2. One woman's constant is another woman's variable** (#2️⃣-one-womans-constant-is-another-womans-variable)

	      * **3. To be is a to be the value of a variable** (#3️⃣-to-be-is-a-to-be-the-value-of-a-variable)

		* [Advanced](#-Advanced)

		  * **4. Real programmers can write assembly code in any language** (#4️⃣-real-programmers-can-write-assembly-code-in-any-language)

		* [Main files](#-Main-files)

		  * **Files**

* [Compilation](#-Compilation)
	* [Requirements](#-Requirements)
	* [Compilation command](#-Compilation-command)


## 🎯 Learning objectives

The learning objectives of this project are to understand :

* what are variadic functions
Variadic functions are functions that can accept a variable number of arguments, specified using an ellipsis (...) after at least one named parameter.

* how to use `va_start`, `va_arg` and `va_end` macros
These macros from the `<stdarg.h>` library are essential for handling arguments in variadic functions.

* why and how to use the `cont` type qualifier
The `const` qualifier ensures immutability, preventing unintended modifications of variable.

## 📄 Scripts

### Header file

* [variadic_functions.h](./variadic_functions.h): header file containing definitions and prototypes for all types and functions written in the project

| File                     | Definition/Prototype                                                           |
| ------------------------ | -------------------------------------------------------------------------------|
| `0-sum_them_all.c`       | `int sum_them_all(const unsigned int n, ...);`                                 |
| `1-print_numbers.c`      | `void print_numbers(const char *separator, const unsigned int n, ...);`        |
| `2-print_strings.c`      | `void print_strings(const char *separator, const unsigned int n, ...);`        |
| `3-print_all.c`          | `void print_all(const char * const format, ...);`                              |
| `struct type`            | <ul><li>`char *type`</li><li>`void (*printf_function)(va_list list)`</li></ul> |
| `typedef type_t`         | `struct type`                                                                  |


### Tasks scripts

#### Mandatory

* ✅ **0. Beauty is variable, ugliness is constant**

    * 📌 **Task** : Write a function that returns the sum of all its parameters.
	* 📄 **File :** [0-sum_them_all.c](./0-sum_them_all.c)
	* 🛠️ **Prototype :** `int sum_them_all(const unsigned int n, ...);`
    * ⚠️ **Instructions :**
	  * If n == 0, return 0

* ✅ **1. To be is to be the value of a variable**

	* 📌 **Task** : Write a function that prints numbers, followed by a new line.
    * 📄 **File :** [1-print_numbers.c](./1-print_numbers.c)  
    * 🛠️ **Prototype :** `void print_numbers(const char *separator, const unsigned int n, ...);`
	  * where `separator` is the string to be printed between numbers
      * and `n` is the number of integers passed to the function
    * ⚠️ **Instructions :**
      * You are allowed to use printf
      * If separator is `NULL`, don’t print it
      * Print a new line at the end of your function

* ✅ **2. One woman's constant is another woman's variable**

	* 📌 **Task** : Write a function that prints strings, followed by a new line.
    * 📄 **File :** [2-print_strings.c](./2-print_strings.c)  
    * 🛠️ **Prototype :** `void print_strings(const char *separator, const unsigned int n, ...);`
	  * where separator is the string to be printed between the strings
	  * and n is the number of strings passed to the function
    * ⚠️ **Instructions :**
	  * You are allowed to use printf
	  * If separator is NULL, don’t print it
	  * If one of the string is NULL, print (nil) instead
	  * Print a new line at the end of your function


* ✅ **3. To be is a to be the value of a variable**

	* 📌 **Task** : Write a function that prints anything.
    * 📄 **File :** [3-print_all.c](./3-print_all.c)
    * 🛠️ **Prototype :** `void print_all(const char * const format, ...);`
	  * where format is a list of types of arguments passed to the function
	    * c: char
	    * i: integer
	    * f: float
	    * s: char * (if the string is NULL, print (nil) instead)
        * any other char should be ignored
    * ⚠️ **Instructions :**
      * You are not allowed to use for, goto, ternary operator, else, do ... while
      * You can use a maximum of
	    * 2 while loops
	    * 2 if
	  * You can declare a maximum of 9 variables
	  * You are allowed to use printf
	  * Print a new line at the end of your function

>  * 📄 **File :** [3-print_all_switch.c](./3-print_all_switch.c) : same purpose as `3-print_all.c` but use `switch` instead of `structure` for choosing the right type to print 



#### Advanced

* ❌ **4. Real programmers can write assembly code in any language**

  * 📌 **Task** : Write a 64-bit program in assembly that prints Hello, World, followed by a new line.
  * 📄 **File :** `100-hello_world.asm` (not present)
  * ⚠️ **Instructions :**
    * You are only allowed to use the system call write (use int or syscall, not a call)
    * Your program will be compiled using nasm and gcc (as follows)
    * ❗Note: GCC may display an error because it will soon remove this functionality from its environment. You can try to compile with

### Main files

## Compilation

### Requirements

**General requirements :**

* System : Ubuntu 20.04 LTS

* Compiler : `gcc`

* Compilation options : `-Wall -Werror -Wextra -pedantic -std=gnu89`

* Coding style : Betty style (betty-style.pl, betty-doc.pl)

**If you want to check if Betty coding style is respected, you need to :**

* Go to the Betty repository (https://github.com/hs-hq/Betty)

* Clone the repo to your local machine

* `cd` into the Betty directory

* Install the linter with `sudo ./install.sh`

* `emacs` or `vi` a new file called betty, and copy the script below:

```#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```

 * Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`

 * Move the betty file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`

 * You can now type `betty <filename>` to run the Betty linter!

### Compilation command

To compile any of the scripts, use `gcc` with the following command:

`gcc -Wall -Werror -Wextra -pedantic file_name.c -o output_file`

For example, to compile 0-sum_them_all.c:

`gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-sum_them_all.c -o sum_them_all
./sum_them_all`
