#include <stdio.h>

int main() {
    char name[50];

    printf("Enter name: ");
    scanf(" %[^\n]", name);

    printf("Hello %s\n", name);

    return 0;
}