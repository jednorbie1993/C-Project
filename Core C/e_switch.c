#include <stdio.h>

int main() {
    int day;

    printf("Enter day (1-3): ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid\n");
    }

    return 0;
}