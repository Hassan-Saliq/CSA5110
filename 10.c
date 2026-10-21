#include <stdio.h>

int main() {
    char matrix[5][5] = {
        {'M','F','H','I','K'},
        {'U','N','O','P','Q'},
        {'Z','V','W','X','Y'},
        {'E','L','A','R','G'},
        {'D','S','T','B','C'}
    };

    char text[] = "MUSTSEEYOUOVERCADOGANWESTCOMINGATONCE";

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
                   matrix[r1][(c1 + 1) % 5],
                   matrix[r2][(c2 + 1) % 5]);
        }
        else if (c1 == c2) {
            printf("%c%c",
                   matrix[(r1 + 1) % 5][c1],
                   matrix[(r2 + 1) % 5][c2]);
        }
        else {
            printf("%c%c",
                   matrix[r1][c2],
                   matrix[r2][c1]);
        }
    }

    return 0;
}
