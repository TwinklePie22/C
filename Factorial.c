#include <stdio.h>
int fact(int); // function definition

int main()
{
    int n;
    printf("enter number\n"); // Ask user for the input and store it in n
    scanf("%d", &n);
    fact(n);                  // function call
    printf("factorial is %d", fact(n)); // displaying factorial of number
}

int fact(int n) // function declaration
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return n*fact(n - 1); // function calling itself(Recursion)
}
