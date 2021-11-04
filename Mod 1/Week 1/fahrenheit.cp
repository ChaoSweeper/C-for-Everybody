/* Conversion of fahrenheit to Celsius
Aug. 23, 2021
*/

#include <stdio.h>

int main(void)
{
    int fahrenheit, celsius;

    printf("Enter the temperature in fahrenheit: ");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8;
    printf("%d degrees fahrenheit is %d degrees celsius.\n", fahrenheit, celsius);
    return 0;
}