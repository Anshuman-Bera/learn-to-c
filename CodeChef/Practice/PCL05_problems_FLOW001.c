// Add Two Numbers
// Your task is very simple: given two integers 
// �
// A and 
// �
// B, write a program to add these two numbers and output the sum.

// Input Format
// The first line contains an integer 
// �
// T, the total number of test cases.
// Then follow 
// �
// T lines, each line contains two integers, 
// �
// A and 
// �
// B.
// Output Format
// For each test case, add 
// �
// A and 
// �
// B and display the sum in a new line.

// Constraints
// 1
// ≤
// �
// ≤
// 1000
// 1≤T≤1000
// 0
// ≤
// �
// ,
// �
// ≤
// 10000
// 0≤A,B≤10000

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    
    while (t--) {
        int a, b,s;
        scanf("%d %d", &a, &b);
        s = a + b;
        printf("%d\n",s);
       
    }
    return 0;
}
