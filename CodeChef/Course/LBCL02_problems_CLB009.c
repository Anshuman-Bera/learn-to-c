// Area & Perimeter of Rectangle
// Write a program for the following problem

// Let’s consider a rectangle of sides 11 and 13.
// Find and output area of the rectangle having sides as 11 and 13
// Find and output perimeter of the rectangle having side as 11 and 13
// For any rectangle, the formula for area is length * breadth.
// The formula for perimeter is 2 * (length + breadth)

#include <stdio.h>

int main() {
    
    int a = 11, b = 13,s,u;
    s = a*b;
    
	printf("%d\n",s);
	
	// Add the formula for perimeter of 11 and 13
	u = (2*(a+b));
	printf("%d\n",u);
	return 0;
}
