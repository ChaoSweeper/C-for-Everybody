#include <stdio.h>
#include <math.h>

int main(){
    float s;
    printf("Enter a number between 0 & 1: \n");
    scanf("%f", &s);
    printf("The sine of %f is %f\n", s, sin(s));
    return 0;
}