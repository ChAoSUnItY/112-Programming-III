#include <stdio.h>

void swap(int *const v1, int *const v2) {
    int tmp = *v1;
    *v1 = *v2;
    *v2 = tmp;
}

int main(void) {
    int v1, v2;

    while (scanf("%d %d", &v1, &v2) != EOF) {
        if (v1 == 0 && v2 == 0) break;

        swap(&v1, &v2);

        printf("%d %d\n", v1, v2);
    }

    return 0;
}
