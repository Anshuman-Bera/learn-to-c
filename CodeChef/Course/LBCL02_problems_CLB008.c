// Outputs In Separate Lines
// When we use multiple printf statements, everything gets printed on one line.
// What to do if we want to print 20 and 40 on separate lines?

// We can use "\n" to have the next outputs be on the next line. It is like pressing the "Enter" / "Return" key on your keyboard, but for the output displayed.
// Task
// Write a program which does the following

// Output the sum of 3 and 4 using printf.
// Output the sum of 1 and 2 using printf, but on a new line.

#include <stdio.h>

int main() {
    
	printf("%d\n", 3 + 4);
	printf("%d\n", 1 + 2);
	return 0;
}