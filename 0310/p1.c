#include <stdio.h>

void f1(int *grades) {
    for (int i = 0; i < 6; i++) {
        printf("%d", grades[i]);

        if (i < 5) {
            printf(" ");
        }
    }
}

void f2(int *grades) {
    int min_idx = 0;

    for (int i = 1; i < 6; i++) {
        if (grades[i] < grades[min_idx]) {
            min_idx = i;
        }
    }

    printf("%d", grades[min_idx]);
}

void f3(int *grades) {
    int max_idx = 0;

    for (int i = 1; i < 6; i++) {
        if (grades[i] > grades[max_idx]) {
            max_idx = i;
        }
    }

    printf("%d", grades[max_idx]);
}

void f4(int *grades) {
    double avg = 0;

    for (int i = 0; i < 6; i++) {
        avg += grades[i];
    }

    avg /= 6;

    printf("%.02lf", avg);
}

void (*functions[4])(int*) = {
    f1, f2, f3, f4
};

int main(void) {
    int grades[6] = { 0 }, choice;

    while (1) {
        for (int i = 0; i < 6; i++) {
            scanf("%d", &grades[i]);
        }

        scanf("%d", &choice);

        if (choice == 4) {
            break;
        } else {
            functions[choice](grades);
            puts("");
        }
    }

    return 0;
}
