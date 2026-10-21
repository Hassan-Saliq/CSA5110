#include <stdio.h>

int main() {
    char str[100];
    int k, i;

    printf("Enter text: ");
    scanf("%s", str);

    printf("Enter k: ");
    scanf("%d", &k);

    for(i = 0; str[i] != '\0'; i++)
        str[i] = (str[i] - 'a' + k) % 26 + 'a';

    printf("Encrypted text: %s", str);

    return 0;
}
