#include <stdio.h>

int main(int argc, char* argv[]) {
    int n;
    scanf("%d", &n);

    int k26 = 0;
    int k13 = 0;
    int k2 = 0;
    int k1 = 0;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        if (x % 26 == 0) {
            k26++;
        } else if (x % 13 == 0) {
            k13++;
        } else if (x % 2 == 0) {
            k2++;
        } else {
            k1++;
        }
    }

    int count = k26 * (k13 + k2 + k1) + k2 * k13 + k26 * (k26 - 1) / 2;
    printf("%d", count);

    return 0;
}