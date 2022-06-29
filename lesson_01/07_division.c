#include <stdio.h>

int main(int argc, char* argv[])
{
    int x = 12345;
    printf("%d %d\n", x / 1000, x % 1000);
    
    while(x != 0)
    {
        printf("%d %d\n", x / 10, x % 10);
        x /= 10;
    }

    double n = 1. / 2.; // or 1 / 2.0
    printf("n = %lf\n", n);

    int y = 5;
    int z = 2;
    double m = (double)y / (double)z; // or (double)y / z
    printf("m = %.1lf\n", m); // %.1 - number of printing symbols after .

    return 0;
}