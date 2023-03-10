#include <stdio.h>

void f1(double r) {
    double res = 2 * 3.14 * r;

    printf("%.02lf", res);
}

void f2(double r) {
    double res = r * r * 3.14;

    printf("%.02lf", res);
}

void f3(double r) {
    double res = r * r * r * (4.0 / 3.0) * 3.14;

    printf("%.02lf", res);
}

void (*functions[3])(double) = {
    f1, f2, f3
};

int main(void) {
    int r, choice;

    while (1) {
        scanf("%d", &choice);

        if (choice == 3)
            break;

        scanf("%d", &r);
        functions[choice]((double) r);
        puts("");
    }

    return 0;
}
