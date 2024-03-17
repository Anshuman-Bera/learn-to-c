// Concatenation
// We can also join one string with another using strcat.

// This is called string concatenation. For eg -

// char x[] = "Good"; 
// char y[] = "Work";
// strcat(x, y);
// printf("%s", x);

// // Output
// // GoodWork
// In the above program, the string x got concatenated with string y.

// Task
// Write a program which does the following

// Declare two strings x and y
// Assign the values "Hello" to variable x and "World" to variable y.
// Concatenate the two string and print the output.

#include <stdio.h>
#include <string.h>
 
int main () {

    char x[] = "Hello";
    
    // declare string y with "World"
    char y[] = "World";
    
    // concatenate the two strings
    strcat(x,y);
    
    // print the final string
    printf("%s", x);
    return 0;
}