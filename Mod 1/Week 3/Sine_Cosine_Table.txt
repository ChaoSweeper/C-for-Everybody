/* Import required libraries, stdio.h and math.h
*/
#include <stdio.h>
#include <math.h>

/* Simple fuction to calculate sine and cosine values for
for (0,1)
*/
int main(void)
{
    // Declare variables
    double interval;
    int i;
    //for loop that runs 100 times
    for (i = 0; i < 100; i++)
    {
        //interval is the value of i divided by 100
        interval = i / 100.0;
        //prints the value of sin(interval) and the absolute value of the value of sin(interval)
        printf("sin(%.2lf) = %.4lf | ", interval, fabs(sin(interval)));
        //prints the value of cos(interval) and the absolute value of the value of cos(interval)
        printf("cos(%.2lf) = %.4lf ", interval, fabs(cos(interval)));
        //prints a new line
        printf("\n");
    }
    return 0;
}