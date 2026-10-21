#include <stdio.h>

int main() {
    char matrix[5][5] = {
        {'R','O','Y','A','L'},
        {'N','E','W','Z','D'},
        {'B','C','F','G','H'},
        {'I','K','M','P','Q'},
        {'S','T','U','V','X'}
    };

    char text[] = "KXJEYUREBEZWEHEWRYTUHEYFSKREHEGOYFIWTTTUOLKSYCAJPOBOTEIZONTXBYBNTGONEYCUZWRGDSONSXBOUYWRHEBAAHYUSEDQ";

    int i, j, r1, c1, r2, c2;

    for (i = 0; text[i] != '\0'; i += 2) {

        for (j = 0; j < 5; j++)
            for (int k = 0; k < 5; k++) {
                if (matrix[j][k] == text[i]) {
                    r1 = j;
                    c1 = k;
                }

                if (matrix[j][k] == text[i + 1]) {
                    r2 = j;
                    c2 = k;
                }
            }

        if (r1 == r2) {
            printf("%c%c",
                   matrix[r1][(c1 + 4) % 5],
                   matrix[r2][(c2 + 4) % 5]);
        }
        else if (c1 == c2) {
            printf("%c%c",
                   matrix[(r1 + 4) % 5][c1],
                   matrix[(r2 + 4) % 5][c2]);
        }
        else {
            printf("%c%c",
                   matrix[r1][c2],
                   matrix[r2][c1]);
        }
    }

    return 0;
}
