/*
Expression Evacuation
Spetember 4, 2021
*/

#include <stdio.h>

int main(void)
{
    int a = 3, b = 4, c = 0, d = 0;

    c = a - b;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = b - a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = a / b ; d = b / a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = a % b ; d = b % a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = -a - b ; d = -b - a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = ++a + b++ ; d +=5;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    return 0;
}