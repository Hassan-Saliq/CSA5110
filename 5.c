#include <stdio.h>

int main() {
    char text[100];
    int a, b, i;

    printf("Enter text: ");
    scanf("%s", text);

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    for (i = 0; text[i] != '\0'; i++) {
        text[i] = ((a * (text[i] - 'a') + b) % 26) + 'a';
    }

    printf("Encrypted text: %s", text);

    return 0;
}
