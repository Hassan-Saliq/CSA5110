#include <stdio.h>

int main() {
    char text[100];
    char cipher[] = "CIPHERABDFGJKLMNOQSTUVWXYZ";
    int i;

    printf("Enter text: ");
    scanf("%s", text);

    for (i = 0; text[i] != '\0'; i++)
        text[i] = cipher[text[i] - 'A'];

    printf("Encrypted text: %s", text);

    return 0;
}
