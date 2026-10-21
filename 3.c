#include <stdio.h>
#include <string.h>

int main() {
    char key[50], text[200], matrix[5][5];
    int used[26] = {0};
    int i, j, k = 0;

    printf("Enter key: ");
    scanf("%s", key);

    for (i = 0; key[i] != '\0'; i++) {
        char c = key[i];
        if (c == 'j') c = 'i';

        if (!used[c - 'a']) {
            matrix[k / 5][k % 5] = c;
            used[c - 'a'] = 1;
            k++;
        }
    }

    for (i = 0; i < 26; i++) {
        if (i == 9) continue;

        if (!used[i]) {
            matrix[k / 5][k % 5] = 'a' + i;
            used[i] = 1;
            k++;
        }
    }

    printf("Enter plaintext: ");
    scanf("%s", text);

    for (i = 0; text[i] != '\0'; i += 2) {
        char a = text[i];
        char b = text[i + 1];

        int r1, c1, r2, c2;

        for (j = 0; j < 5; j++)
            for (k = 0; k < 5; k++) {
                if (matrix[j][k] == a) {
                    r1 = j;
                    c1 = k;
                }
                if (matrix[j][k] == b) {
                    r2 = j;
                    c2 = k;
                }
            }

        if (r1 == r2) {
            printf("%c%c", matrix[r1][(c1 + 1) % 5],
                           matrix[r2][(c2 + 1) % 5]);
        }
        else if (c1 == c2) {
            printf("%c%c", matrix[(r1 + 1) % 5][c1],
                           matrix[(r2 + 1) % 5][c2]);
        }
        else {
            printf("%c%c", matrix[r1][c2], matrix[r2][c1]);
        }
    }

    return 0;
}
