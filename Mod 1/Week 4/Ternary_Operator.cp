#include <stdio.h>

int main()  {
    int speed;
    printf("Enter the speed limit: ");
    scanf("%d", &speed);
    speed = (speed <= 65) ? (65) : (speed <=70)? (70): (90);
    switch (speed) {
        case 65: printf("\nNo Speeding Ticket\n\n"); break;
        case 70: printf("\nSpeeding Ticket\n\n"); break;
        case 90: printf("\nLicense Suspended\n\n"); break;
        default: printf("\nInvalid Speed\n\n"); break;
    }
    return 0;
}

