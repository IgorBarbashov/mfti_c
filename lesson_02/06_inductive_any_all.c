#include <stdio.h>
#include <stdbool.h>

char* print_bool(bool f) {
    return f == 0 ? "false" : "true";
}

int main(int argc, char* argv[]) {

    printf("Enter number to generate sequence: ");
    int x;
    scanf("%d", &x);

    printf("Enter number upper bound for any digit: ");
    int b;
    scanf("%d", &b);

    bool any_of = false;
    bool all_of = true;

    while (x != 0) {
        int d = x % 10;
        any_of = any_of || d < b;
        all_of = all_of && d < b;
        x /= 10;
    }

    printf("Any of all: %s\n", print_bool(any_of));
    printf("All of all: %s\n", print_bool(all_of));

    return 0;
}