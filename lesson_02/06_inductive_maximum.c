#include <stdio.h>
#include <stdbool.h>

int main(int argc, char* argv[]) {
    int x, pos = 0, max_count = 0;
    int max = -1100000;
    int max_pos = pos;
    
    scanf("%d", &x);
    while (x != 0) {
        pos++;
        
        if (x % 2 == 0 && x > max) {
            max = x;
            max_pos = pos;
            max_count = 0;
        }

        if (x == max) {
            max_count++;
        }

        scanf("%d", &x);
    }

    printf("Max: %d on the %d position (number of max: %d)", max, max_pos, max_count);

    return 0;
}