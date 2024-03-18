// 
// To things to note here:

// The condition age >= voting_age is inside parentheses ( ).
// The printf statements are inside curly brackets { }.
// The parentheses are mandatory after if statement, and the condition comes inside them. We use curly brackets in C to define scope. Because of the curly braces, C knows that it has to execute the print statement if the condition becomes true.

// Task
// You need to do the following

// Run the code as is and read the error that you get
// Add parentheses around the condition and then re-run the code

#include <stdio.h>

int main()
{
    int age;
    int voting_age = 18;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= voting_age)
    {
        printf("You can vote\n");
    }
    else
    {
        printf("You cannot vote\n");
    }

    return 0;
}