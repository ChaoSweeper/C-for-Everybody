#include <stdio.h>

int main(void)  {
    int blanks = 0, digits = 0, letters = 0, others = 0;
    int c; // used for intializing the while loop
    while((c = getchar()) != (-1)) {
        if (c == ' ')
            ++blanks;
        else if (c >= '0' && c <= '9')
            ++digits;
        else if ((c >= 'A' && c <= 'Z') || (c >= 'A' && c <= 'Z'))
            ++letters;
        else
            ++others;
    };
    printf("blanks: %d , digits = %d , letters = %d ,", blanks, digits, letters);
    printf("others = %d\n\n", others);
    return 0;
}