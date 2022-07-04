#include <stdio.h>
#include <stdlib.h>

void array_alloc(int ***PA, int h, int w);
void array_fill(int ***PA, int h, int w);
void array_print(int ***PA, int h, int w);
void array_free(int ***A);

int main(void) {
    int max_height = 4;
    int max_weight = 5;

    int **ARRAY = NULL;
    int ***A = &ARRAY;

    array_alloc(A, max_height, max_weight);
    array_fill(A, max_height, max_weight);
    array_print(A, max_height, max_weight);
    array_free(A);
}

void array_alloc(int ***PA, int h, int w) {
    *PA = (int **)malloc(h * sizeof(int *) + h * w * sizeof(int));
    int **A = *PA;
    int *start = (int *)(A + h);
    for(int i = 0; i < h; i++) {
        A[i] = start + i * w;
    }
};

void array_fill(int ***PA, int h, int w) {
    int **A = *PA;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            A[i][j] = i * h + j + 2000;
        }
    }
};

void array_print(int ***PA, int h, int w) {
    int **A = *PA;
    for(int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
};

void array_free(int ***PA) {
    free(*PA);
};