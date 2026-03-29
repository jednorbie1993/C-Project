#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    char text[100];

    while (fgets(text, sizeof(text), fp)) {
        printf("%s", text);
    }

    fclose(fp);

    return 0;
}