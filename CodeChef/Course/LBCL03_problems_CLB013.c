// Inserting space between outputs
// You can also have multiple outputs together in a single "printf()" function.

// For example:

// printf("%d %d", 2, 3);

// // Output:
// // 2 3
// We can have as many %d as we want. Because we added a space between two %d, the output has space between two numbers.

// Task
// Write a program to output 7 and 3 on a single line, space separated, using a single printf statement.

#include<stdio.h>
int main(){
    printf("%d  %d", 7, 3);
    return 0 ;
}
