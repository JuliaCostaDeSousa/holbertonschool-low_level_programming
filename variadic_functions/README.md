# Variadic functions

## 📜 Table of contents

* [Learning objectives](#learningobjectives)
* [Scripts](#scripts)
	* [Header file](#headerfile)
	* [Tasks](#tasks)
		* [Mandatory](#mandatory)

		  * **0. Beauty is variable, ugliness is constant()**

	      * **1. To be is to be the value of a variable**

	      * **2. One woman's constant is another woman's variable**

	      * **3. To be is a to be the value of a variable**

		* [Optionnal](#optionnal)

		  * **4. Real programmers can write assembly code in any language**

## Learning objectives

The learning objectives of this project are to understand :

* what are variadic functions

* how to use `va_start`, `va_arg` and `va_end` macros

* why and how to use the `cont` type qualifier


## Scripts

### Header file

* `variadic_functions.h` : 

### Tasks

#### Mandatory

* ✅ **0. Beauty is variable, ugliness is constant**

  * `0-sum_them_all.c` : returns the sum of all its parameters
	* **Prototype** : `int sum_them_all(const unsigned int n, ...);`
	* If n == 0, return 0.

* ✅ **1. To be is to be the value of a variable**

  * `1-print_numbers.c` : write a function that prints numbers, followed by a new line
    * **Prototype** : `void print_numbers(const char *separator, const unsigned int n, ...);`
    * where separator is the string to be printed between numbers
    * and n is the number of integers passed to the function
    * You are allowed to use printf
    * If separator is NULL, don’t print it
    * Print a new line at the end of your function

* ✅ **2. One woman's constant is another woman's variable**

  * `2-print_strings.c` : write a function that prints strings, followed by a new line
    * **Prototype** : `void print_strings(const char *separator, const unsigned int n, ...);`
	* where separator is the string to be printed between the strings
	* and n is the number of strings passed to the function
	* You are allowed to use printf
	* If separator is NULL, don’t print it
	* If one of the string is NULL, print (nil) instead
	* Print a new line at the end of your function


* ✅ **3. To be is a to be the value of a variable**

  * `3-print_all.c` : write a function that prints anything
    * **Prototype** : `void print_all(const char * const format, ...);`
	* where format is a list of types of arguments passed to the function
	  * c: char
	  * i: integer
	  * f: float
	  * s: char * (if the string is NULL, print (nil) instead
      * any other char should be ignored
    * You are not allowed to use for, goto, ternary operator, else, do ... while
    * You can use a maximum of
	  * 2 while loops
	  * 2 if
	* You can declare a maximum of 9 variables
	* You are allowed to use printf
	* Print a new line at the end of your function

#### Optionnal

* ❌ **4. Real programmers can write assembly code in any language**

  * `100-hello_world.asm` : write a 64-bit program in assembly that prints Hello, World, followed by a new line.
  * You are only allowed to use the system call write (use int or syscall, not a call)
  * Your program will be compiled using nasm and gcc (as follows)
  * ❗Note: GCC may display an error because it will soon remove this functionality from its environment. You can try to compile with





