#include <stdio.h>

#define N 11

void array_copy(int FROM[], int TO[]) {
    for (int i = 0; i < N; i++) {
        TO[i] = FROM[i];
    }
}

void array_copy_reverse(int FROM[], int TO[]) {
    for (int i = 0; i < N; i++) {
        TO[i] = FROM[N - i - 1];
    }
}

void array_reverse(int A[]) {
    for (int i = 0; i < N / 2; i++) {
        int tmp = A[i];
        A[i] = A[N - i - 1];
        A[N - i - 1] = tmp;
    }
}

void array_print(int A[]) {
    for (int i = 0; i < N; i++) {
        printf("%3d", A[i]);
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    int A[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int B[N] = {0};
    int C[N] = {0};

    array_copy(A, B);
    array_copy_reverse(A, C);
    array_reverse(A);

    array_print(A);
    array_print(B);
    array_print(C);

    return 0;
}