#include <stdio.h>

#define N 15 // компилятор будет заменять эту константу на реальное значение при компиляции

int main(int argc, char* argv[]) {
    int a[N] = {0};
    int b[N];

    for (int i = 0; i < N; i++) {
        b[i] = i % 2 == 0 ? i / 2 : (N + i) / 2 - 1;
    }

    for (int i = 0; i < N; i++) {
        printf("%d - %d : %d\n", i, b[i], a[i]);
    }

    return 0;
}