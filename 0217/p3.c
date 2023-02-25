#include <stdio.h>
#include <string.h>

void reverse(char *source) {
    int len =  strlen(source);

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", source[i]);
    }

    printf("\n");
}

int main(void) {
    char source[1000], dumped;

    while (scanf("%[^\n]%c", source, &dumped) != EOF) {
        reverse(source);
    }

    return 0;
}