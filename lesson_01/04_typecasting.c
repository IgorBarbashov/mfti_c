#include <stdio.h>

int main(int argc, char* argv[])
{
    // int implicitly cast to unsigned int
    int x = -100;
    unsigned int y = 10U;
    long int z = x + y;
    printf("z = %ld\n", z);

    // char explicitly cast to  int
    char c = 'Я';
    int d = (int)c * 10 + y;
    printf("d = %d\n", d);

    return 0;
}