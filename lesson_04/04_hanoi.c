#include <stdio.h>

void hanoi(int height, int from, int to);

int main(int argc, char* argv[]) {
    
    hanoi(3, 1, 2);

    return 0;
}

void hanoi(int height, int from, int to) {
    if (height == 1) {
        printf("Move disk %d from pin %d to %d.\n", height, from, to);
    } else {
        int tmp = 6 - from - to;
        hanoi(height - 1, from, tmp);
        printf("Move disk %d from pin %d to %d.\n", height, from, to);
        hanoi(height - 1, tmp, to);
    }
};