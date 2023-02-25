#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool testPalindrome(char *str, int len) {
    const char *lp = str, *rp = str + len - 1;

    while (lp < rp) {
        const char lc = isalpha(*lp) ? toupper(*lp) : *lp, rc = isalpha(*rp) ? toupper(*rp) : *rp;
        // printf("`%c` `%c`\n", *lp, *rp);

        if (!isalnum(*lp)) {
            lp++;
        } else if (!isalnum(*rp)) {
            rp--;
        } else if (lc == rc) {
            lp++;
            rp--;
        } else {
            return false;
        }
    }

    return true;
}

int main(void) {
    char str[1000];

    while (!feof(stdin)) {
        if (fgets(str, 1000, stdin) != NULL) {
            printf("%d\n", testPalindrome(str, strlen(str)));
        } else break;
    }

    return 0;
}
