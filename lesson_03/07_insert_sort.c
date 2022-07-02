#include <stdio.h>
#include <stdbool.h>

#define ALLOCATED_SIZE 1000

int array_input(int A[], int max_size) {
    int top = 0;

    while(true) {
        int x;
        scanf("%d", &x);
        if (x == 0 || top == max_size) {
            break;
        }
        A[top] = x;
        top++;
    }

    return top;
}

void array_print(int A[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void array_insert_sort(int A[], int size) {
    for (int i = 1; i < size; i++) {
        int j = i - 1;

        while(j >= 0 && A[j] > A[j + 1]) {
            int tmp = A[j + 1];
            A[j + 1] = A[j];
            A[j] = tmp;
            j--;
        }
    }
};

int main(int argc, char* argv[]) {
    int A[ALLOCATED_SIZE];
    int top = array_input(A, ALLOCATED_SIZE);
    array_insert_sort(A, top);
    array_print(A, top);
    return 0;
}