/* Recursive vs Interative Factorial
simple recursion
n! = 1 * 2 * 3 * 4 * 5 * ... * n
*/

#include <stdio.h>

long int factorial(int n)
{
    long f = 1;
    int i = 1;

    for (i = 1; i <= n; i++)
        f = f * i;
    return f;
}

long int recursion_factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * recursion_factorial(n - 1);
}

int main(void)
{
    int how_many = 0, i;
    printf("I want a table of factorial up to n:");

    scanf("%d", &how_many);
    printf("\n Factorials\n");

    for (i = 1; i <= how_many; i++)
        printf("\n%d\t %ld\n", i, factorial(i));
    printf("\n");
    for (i = 1; i <= how_many; i++)
        printf("\n%d\t %ld\n", i, recursion_factorial(i));
    printf("\n");
    return 0;
}