#include <stdio.h>

int grasshopper_path(int n);

int main(int argc, char* argv[]) {
    int n;
    scanf("%d", &n);
    int p = grasshopper_path(n);
    printf("%d", p);

    return 0;
}

// задача про траектории кузнечика
int grasshopper_path(int n) {
    int Gp[n + 1];
    Gp[0] = 0;
    Gp[1] = 1;

    for (int i = 2; i <= n; i++) {
        Gp[i] = Gp[i - 1] + Gp[i - 2];
    }

    return Gp[n];
};