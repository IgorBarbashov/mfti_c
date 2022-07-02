#include <stdio.h>
#include <time.h>

static int cache[100] = {0};

int fibonacci(int n);
int fibonacci_cache(int n);
int fibonacci_dynamic(int n);

int main(int argc, char* argv[]) {

    for (int i = 0; i < 45; i++) {
        clock_t time1 = clock();
        int result = fibonacci(i);
        clock_t time2 = clock();

        clock_t time1_cache = clock();
        int result_cache = fibonacci_cache(i);
        clock_t time2_cache = clock();

        clock_t time1_dynamic = clock();
        int result_dynamic = fibonacci_dynamic(i);
        clock_t time2_dynamic = clock();

        int delta_ms = (time2 - time1)*1000/CLOCKS_PER_SEC;
        int delta_ms_dynamic = (time2_dynamic - time1_dynamic)*1000/CLOCKS_PER_SEC;
        int delta_ms_cache = (time2_cache - time1_cache)*1000/CLOCKS_PER_SEC;

        printf("fib(%d)(recursive/cache/dynamic) = %d / %d / %d, time(recursive/cache/dynamic) = %d / %d / %d ms\n",
            i, result, result_cache, result_dynamic, delta_ms, delta_ms_cache, delta_ms_dynamic);
    }

    return 0;
}

// n == 0 || n == 1 -> fibonacci = n
// fibonacci = fibonacci(n - 1) + fibonacci(n - 2)
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
};

// динамическое программирование сверху
int fibonacci_cache(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    if (cache[n] == 0) {
        cache[n] = fibonacci_cache(n-1) + fibonacci_cache(n-2);
    }
    return cache[n];
}

// динамическое программирование снизу
int fibonacci_dynamic(int n) {
    int Fib[n + 1];
    Fib[0] = 0;
    Fib[1] = 1;
    
    for (int i = 2; i <= n; i++) {
        Fib[i] = Fib[i - 1 ] + Fib[i - 2];
    }
    return Fib[n];
};