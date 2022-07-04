#include <stdio.h>
#include <stdlib.h>

#define MATRIX_HEIGHT 4
#define MATRIX_WIDTH 5

void static_array_test(size_t N);
void static_array_print(int A[][MATRIX_WIDTH], size_t N);

int main(void) {
    static_array_test(MATRIX_HEIGHT);

    return 0;
}

void static_array_test(size_t N) {
    int A[N][MATRIX_WIDTH];
    int x = 1;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < MATRIX_WIDTH; j++) {
            A[i][j] = x;
            x++;
        }
    }
    static_array_print(A, N);

    // memory investigation
    printf("\n Direct memory access:\n");
    for(int *p = (int *)A; p < (int *)A + 20; p++) {
        printf("%3d", *p);
    }
    printf("\n\n");
}

void static_array_print(int A[][MATRIX_WIDTH], size_t N) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < MATRIX_WIDTH; j++) {
            printf("%*d", 5, A[i][j]);
        }
        printf("\n");
    }
}