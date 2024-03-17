
// Prev
// Declaring a variable
// When we declare a variable, we should also specify what type of variable it is. This is known as data type, basically meaning what type of data we are going to store in a variable.

// Here are all the major data types and what they store in C:

// Data Type	Description	Example Declaration
// int	Stores whole numbers	int c = 100000;
// long	Stores big whole numbers	long d = 100000L;
// float	Stores small decimal numbers	float e = 10.5;
// double	Stores big decimal numbers	double f = 10.5;
// char	Stores single characters	char g = 'A';
// Task
// Write a program which does the following

// Create an integer variable named number
// Assign the value 19 to number
// Output the value of number.

#include <stdio.h>

int main() {
    // Declare a variable
 
    int number = 19;
    
    // Print the variable
    printf("%d",number);
    return 0;
  
}