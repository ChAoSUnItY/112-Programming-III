#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    const char str[1000];
    const char *tok;

    while (!feof(stdin)) {
        if (fgets(str, sizeof(str), stdin) == NULL) break;

        tok = strtok(str, " ");

        while (tok) {
            char c = (char) atoi(tok);

            printf("%c", c);

            tok = strtok(NULL, " ");

            if (tok) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }

    return 0;
}
