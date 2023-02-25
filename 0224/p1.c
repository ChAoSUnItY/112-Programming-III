#include <stdio.h>
#include <ctype.h>
#include <string.h>

void count(int map[], const char *string) {
    for (int i = 0; i < strlen(string); i++) {
        char ch = string[i];

        if (isalpha(ch)) {
            char c = islower(ch) ? toupper(ch) : ch;
            int index = c - 'A';

            map[index]++;
        }
    }
}

int main(void) {
    char str[1000];
    int map[26] = {0};
    int n;
    scanf("%d", &n);

    while ((getchar()) != '\n');

    for (int i = 0; i < n; i++) {
        fgets(str, 1000, stdin);
        count(map, str);
    }

    int max = 0;

    for (int i = 0; i < 26; i++) {
        if (map[i] > max) max = map[i];
    }

    for (int i = max; i > 0; i--) {
        for (int j = 0; j <= 26; j++) {
            if (map[j] == i) printf("%c %d\n", j + 'A', i);
        }
    }

    return 0;
}
