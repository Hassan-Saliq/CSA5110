#include <stdio.h>

int main() {
    char text[200];
    int i, c;

    printf("Enter ciphertext: ");
    scanf("%s", text);

    for (i = 0; text[i] != '\0'; i++) {
        c = text[i] - 'A';
        text[i] = ((9 * (c - 15 + 26)) % 26) + 'A';
    }

    printf("Plaintext: %s", text);

    return 0;
}
