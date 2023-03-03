#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const char input[1000];
    const char *token;

    while (!feof(stdin)) {
        int code1 = 0;
        long code2 = 0;
        
        if (fgets(input, sizeof(input), stdin) == NULL) break;

        for (int i = 0; i < 3 && token; i++) {
            token = strtok(i == 0 ? input : NULL, "()-");

            switch (i) {
                case 0:
                    code1 = atoi(token);
                    break;
                case 1:
                    code2 = atol(token);
                    break;
                case 2:
                    code2 *= 10000;
                    code2 += atol(token);
                    break;
            }
        }

        printf("%d - %lld\n", code1, code2);
    }

    return 0;
}
