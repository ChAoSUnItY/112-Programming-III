#include <stdlib.h>
#include <stdio.h>

void output(const int* arr, int len) {
    printf("A[%d]={", len);
    for (int i = 0; i < len; i++) {
        printf("%d", arr[i]);
        if (i != len - 1) {
            printf(",");
        }
    }
    printf("}\n");
}

int main(void) {
    int len, *arr;
    while (scanf("%d", &len) != EOF && len != 0) {
        arr = calloc(len, sizeof(int));

        for (int i = 0; i < len; i++) {
            scanf("%d", &arr[i]);
        }

        output(arr, len);
        free(arr);
    }
    return 0;
}
