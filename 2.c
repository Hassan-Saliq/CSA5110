#include <stdio.h>

int main() {
    char text[100], key[26];
    int i;

    printf("Enter text: ");
    scanf("%s", text);

    printf("Enter 26-letter key: ");
    scanf("%s", key);

    for(i = 0; text[i] != '\0'; i++) {
        text[i] = key[text[i] - 'a'];
    }

    printf("Encrypted text: %s", text);

    return 0;
}
