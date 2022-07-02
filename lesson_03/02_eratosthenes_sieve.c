#include <stdio.h>

#define N 100

void print_array(int* array, int length) {
    printf("Prime numbers:\n");

    for (int i = 2; i < length; i++) {
        if (array[i] == 0) {
            printf("%3d", i); // %3d - число из 3-х символов, добавляется пробелами
        }
    }

    printf("\n");
}

int main(int argc, char* argv[]) {
    int n[N] = {0};

    for (int i = 2; i * i < N; i++) {
        for (int j = i * i; j < N; j += i) {
            n[j] = 1;
        }
    }

    print_array(n, N);

    return 0;
}