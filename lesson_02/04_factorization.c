#include <stdio.h>

void print_number_factors(int x) {
    int devisor = 2;

    while(devisor <= x) {
        if (x % devisor == 0) {
            printf("%d ", devisor);
            x /= devisor;
            continue;
        }
        ++devisor;
    }
}

int main(int argc, char* argv[]) {
    int x;
    printf("Enter number t factorize: ");
    scanf("%d", &x);
    print_number_factors(x);

    return 0;
}