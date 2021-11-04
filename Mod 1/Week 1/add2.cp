/* Read in two Floats and print sum
Aug. 23 2021
*/

#include <stdio.h>

int main(void)
{
    float a, b, sum;
    printf("Input two floats:");
    scanf("%f%f", &a, &b);
    printf("a = %f, b = %f\n", a, b);
    sum = a + b;
    printf("sum = %f\n\n", sum);
    return 0;
}