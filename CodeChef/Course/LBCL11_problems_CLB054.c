
// In the program, we are:

// Declaring an integer x
// Taking input in the variable x using scanf
// Printing the value of x
// Note that when taking input, we have to write "%d" to tell the compiler that we are taking integer input. We use &x because scanf needs the address (location) where it should store the value.

// Task
// Write a program which does the following

// Declare an integer variable a
// Try taking a number from the console and assign it to a
// Output a to the console

#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("The number you entered is %d\n", a);

    return 0;
}