#include <stdio.h>
#include <math.h>

void compute(int *i) {
    *i = *i % 2 == 0 ? *i * 2 : pow(*i, 2);
}

int main(void) {
    int i;

    while (scanf("%d", &i) != EOF && i) {
        compute(&i);
        
        printf("%d\n", i);
    }

    return 0;
}