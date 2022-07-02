#include "stdio.h"

#define N 6

void array_print(int A[]) {
    printf("\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    int A[N];
    int P[N];
    int count = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        if (A[i] > 100 && A[i] % 5 == 0) {
            P[count] = i;
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        A[P[i]] = count;
    }

    array_print(A);

    return 0;
}
