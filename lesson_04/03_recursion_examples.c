#include <stdio.h>

int factorial(int n);
int gcd(int a, int b);
double fast_power(double a, int n);
int fibonacci(int n);

int main(int argc, char* argv[]) {
    printf("Factorial\n");
    int x;
    scanf("%d", &x);
    int f = factorial(x);
    printf("Factorial: %d\n\n", f);

    printf("gcd\n");
    int a, b;
    scanf("%d%d", &a, &b);
    int g = gcd(a, b);
    printf("gcd: %d\n\n", g);

    printf("Power\n");
    double n;
    int m;
    scanf("%lf%d", &n, &m);
    double p = fast_power(n, m);
    printf("Power: %lf\n\n", p);

    printf("Fibonacci\n");
    int k;
    scanf("%d", &k);
    int fib = fibonacci(k);
    printf("Fibonacci: %d", fib);

    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n  -1);
}

// b == 0 -> gcd = a
// b != 0 -> gcd(b, a % b)
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// n == 0 -> power = 1
// n % 2 == 0 -> a^(n/2) ^ 2
// n % 2 != 0 -> a^(n-1) * a
double fast_power(double a, int n) {
    if (n == 0) {
        return 1;
    }
    if (n % 2 == 0) {
        return fast_power(a * a, n / 2);
    }
    return a * fast_power(a, n - 1);
};

// n == 0 || n == 1 -> fibonacci = n
// fibonacci = fibonacci(n - 1) + fibonacci(n - 2)
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
};