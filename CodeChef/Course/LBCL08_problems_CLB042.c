
// Prev
// Next
// Outputting Characters from a String
// We can access the characters in a string by referring to its index number inside square brackets [].
// We use the concept of indexing which means every character in a string corresponds to a number called the index number

//                0 1 2 3 4 5 6 7  - index number
//      for eg - "C o d e C h e f"
// Note

// Indexing always starts from 0 when going left to right.
// So the first character of a string s is s[0], the second is s[1], and so on.
// Example:

// char site[] = "CodeChef";
// printf("%c", site[0]);

// // Output
// // C
// For printing characters of a string, we use %c, instead of the %s which we use when printing the string.

// Task
// Write a program which does the following

// Create a string variable word and assign the text "Programming" to it
// Print the characters o and r from the string word in separate lines using the syntax defined above

#include <stdio.h>

int main() {

    char word[] = "Programming";
    printf("%c\n", word[ 2 ]);
    printf("%c\n",word[1]);
    return 0;

}
