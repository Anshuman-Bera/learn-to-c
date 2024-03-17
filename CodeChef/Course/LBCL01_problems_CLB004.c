// Arithmetic Operations
// We can also perform mathematical operations (like addition, subtraction etc) with printf().

// These use the familiar symbols of:

// +
// + for addition
// −
// − for subtraction
// ∗
// ∗ for multiplication
// /
// / for division
// To add two number we do this:

// printf("%d", 21 + 40);
// The above line of code will output: 61

// Again, printf is the function we use when we want to print. "%d" tells the compiler that we want to print a number. And writing 21 + 40 tells the compiler to add these two number and print the sum.

// Task
// Try to add 21 and 40 in code and print the result. Remember, we don't need "" (double quotes) when printing numbers.

#include <stdio.h>

int main() {

  int a = 21,b = 40,s;
  
  s = a + b;
  printf("%d",s);
  return 0;

}