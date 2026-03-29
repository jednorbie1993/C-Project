#include <stdio.h>

struct Student {
    int id;
    char name[50];
};

int main() {
    struct Student s1;

    printf("Enter ID: ");
    scanf("%d", &s1.id);

    printf("Enter Name: ");
    scanf(" %[^\n]", s1.name);

    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);

    return 0;
}