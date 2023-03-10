#include <stdio.h>

void f1(double v1, double v2) {
    printf("%.02lf", v1 + v2);
}

void f2(double v1, double v2) {
    printf("%.02lf", v1 - v2);
}

void f3(double v1, double v2) {
    printf("%.02lf", v1 * v2);
}

void f4(double v1, double v2) {
    printf("%.02lf", v1 / v2);
}

void (*functions[4])(double, double) = {
    f1, f2, f3, f4
};

int main(void) {
    double v1, v2;
    int choice;

    while (1) {
        scanf("%d", &choice);

        if (choice == 4) break;

        scanf("%lf %lf", &v1, &v2);

        functions[choice](v1, v2);

        puts("");
    }
    
    return 0;
}
