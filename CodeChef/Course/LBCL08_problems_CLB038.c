// Creating a String
// Strings are used for storing text.

// A string variable contains a collection of characters surrounded by double quotes. Strings are implemented as character arrays in C.

// For example:

// char greet[] = "Hello";
// greet is a variable of type string and contains the value Hello.

// To print a string, we use another format specifier, %s.

// Example:

// char greet[] = "Hello";
// printf("%s", greet);

// // Output
// // Hello
// Task
// Write a program which does the following

// Create a string named fruit and assign the value "Apple" to it.
// Output fruit to the console.

#include <stdio.h>

int main() {

    char fruit[] = "Apple";
    printf("%s", fruit);
    return 0;

}