#include <stdio.h>

void array_print(int A[], int length) {
    for (int i = length - 1; i >= 0; i--) {
        printf("%d", A[i]);
    }
    printf("\n");
}

int factorization(int n, int A[]) {
    int t = 0;
    while(n != 0) {
        A[t] = n % 10;
        t++;
        n /= 10;
    }
    return t;
};

int main(int argc, char* argv[]) {
    int n;
    scanf("%d", &n);

    int A[20];
    int t = factorization(n, A);
    array_print(A, t);
    printf("%d", t);

    return 0;
}