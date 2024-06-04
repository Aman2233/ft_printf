# ft_printf

## Task

The Project Asks Students to hard-code the printf function from C libraries.

### what is printf and how does it work?

printf is a function used in c from the library <stdio.h> the function returns an int value 

#### Specifier

Specifiers are used to return specific data type given to printf

%d: for printing integers
%f: for printing floating-point numbers
%c: for printing characters
%s: for printing strings
%p: for printing memory addresses
%x: for printing hexadecimal values

#### Example code

``` C
#include <stdio.h>
 
int main()
{
	# this prints text "Hello World"
    printf("Hello World!\n");

    # the code below prints "Hi Sam you are 22 years old"
    printf("Hi Sam you are %d years old", 22);

    # the code below prints "Hi Sam you are 22 years old"
    printf("Hi %s you are %d years old", "Sam", 22);
 
    return 0;
}
```

## Varidic Function

What ar

## Links 
 [tutorialspoint](https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm)
 [geeksforgeek: printf](https://www.geeksforgeeks.org/printf-in-c/)
 [geeksforgeeks: Vardic-Functions](https://www.geeksforgeeks.org/variadic-functions-in-c/)
