#include <stdio.h>

int main(int argc, char* argv[]) {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((a[i] * a[j]) % 26 == 0) {
                count++;
            }
        }
    }

    printf("%d", count);
    
    return 0;
}