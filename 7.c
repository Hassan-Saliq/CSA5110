#include <stdio.h>
#include <string.h>

void replace(char *text, char *symbol, char letter) {
    char *p;

    while ((p = strstr(text, symbol)) != NULL) {
        p[0] = letter;
        p[1] = '\0';
        memmove(p + 1, p + strlen(symbol), strlen(p + strlen(symbol)) + 1);
    }
}

int main() {
    char text[] = "53‡‡†305))6*;4826)4‡.)4‡);806*;48†8¶60))85;;]8*;:‡*8†83(88)5*†;46(;88*96*?;8)*‡(;485);5*†2:*‡(;4956*2(5*—4)8¶8*;4069285);)6†8)4‡‡;1(‡9;48081;8:8‡1;48†85;4)485†528806*81(‡9;48;(88;4(‡?34;48)4‡;161;:188;‡?;";

    char *symbols[] = {
        "5","3","‡","†","0",")","6","*",";","4","8","2",".","(","?",";",":","¶","]","1","9","—"
    };

    char letters[] = {
        'a','g','o','d','l','s','i','n','t','h','e','b','p','r','u','t','y','v','w','f','m','c'
    };

    int i;

    for (i = 0; i < 22; i++)
        replace(text, symbols[i], letters[i]);

    printf("%s", text);

    return 0;
}
