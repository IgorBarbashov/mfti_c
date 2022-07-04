#include <stdio.h>
#include <stdlib.h>

void get_memmory(int n) {
    char *A = (char *)malloc(n);
    
    if (A == NULL) {
        printf("OS didn't gave memory. Exit...\n");
        exit(1);
    }

    for (int i = 0; i < n; ++i) {
        A[i] = i;
    }
        
    printf("Array A successfully created!\n");

}

int main(int argc, char* argv[]) {
    int n;
    printf("Enter size of array to create:");
    scanf("%d", &n);

    get_memmory(n);
    system("pause");

    get_memmory(n);
    system("pause");

    return 0;
}