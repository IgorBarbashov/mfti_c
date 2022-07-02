#include <stdio.h>

int main(int argc, char* argv[]) {
    
    int i = 10;
    int *pi = &i;
    int **ppi = &pi;
    int ***pppi = &ppi;

    printf("--------------------------------------- %d\n", i);
    printf("%d %d\n", pi, *pi);
    *pi = 20;
    printf("--------------------------------------- %d\n", i);
    printf("%d %d %d\n", ppi, *ppi, **ppi);
    **ppi = 30;
    printf("--------------------------------------- %d\n", i);
    printf("%d %d %d %d\n", pppi, *pppi, **pppi, ***pppi);
    ***pppi = 40;
    printf("--------------------------------------- %d\n", i);

    return 0;
}