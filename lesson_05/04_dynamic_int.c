#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N = 50000000;

    for (int k = 0; k < 1000; k++) {
        int *A = (int *)malloc(N * sizeof(int));

        if (A == NULL) {
            printf("OS didn't gave memory. Exit...\n");
            exit(1);
        }

        printf("Allocate array - OK. iteration %d.\n", k);

        for (int i = 0; i < N; i++) {
            A[i] = i;
        }

        //free(A); //TODO: uncomment this line
    }

    printf("Program is on finish!\n");
    system("pause");

    return 0;
}