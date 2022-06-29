#include <stdio.h>

int main(int argc, char* argv[])
{
    int a, b, c;
    a = b = c = 5;

    int x = 256;

    x += 256; // 512
    x -= 256; // 256
    x *= 2; // 512
    x /= 8; // 64

    printf("x = %d\n", x);

    return 0;
}