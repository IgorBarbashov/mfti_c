#include <stdio.h>
#include <stdbool.h>

#define N 9

void array_print(int A[]) {
    printf("\n");
    for (int i = 0; i < N; i++) {
        printf("%3d ", A[i]);
    }
    printf("\n");
}

void array_shift(int A[], int shift_size, bool is_cycle, char direction) {
    int k = direction == 'L' ? 1 : -1;
    int start = k == 1 ? 0 : N - 1;
    int interrupt = N - 1 - start;

    for (int j = 0; j < shift_size; j++) {
        for (int i = start; i * k < interrupt * k; i += k) {
            int tmp = A[i];
            int from_index = i + k < N ? i + k : i + k - N;
            A[i] = A[from_index];
            A[from_index] = is_cycle ? tmp : 0;
        }
    }
}

int main(int argc, char* argv[]) {
    int A[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    array_shift(A, 6, true, 'R');
    array_print(A);

    return 0;
}