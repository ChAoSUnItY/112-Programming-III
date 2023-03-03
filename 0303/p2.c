#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void sort(char *const str, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (tolower(str[j]) > tolower(str[j + 1])) {
                char tmp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = tmp;
            }
        }
    }
}

int main(void) {
    char buf[1000];

    while (scanf("%s", &buf) != EOF) {
        sort(buf, strlen(buf));

        printf("%s\n", buf);
    }

    return 0;
}
