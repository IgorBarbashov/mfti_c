#include <stdio.h>
#include <stdlib.h>

void print_abstract(void *p, char marker);

int main(int argc, char* argv[]) {
    
    // указатель без типа
    // мы можем положить туда все что угодно (любой адрес)
    void *p;

    // адрес int
    int i = 450;
    p = &i;
    printf("int pointer = %d %d\n", p);
    
    // адрес char
    char c = 'Z';
    p = &c;
    printf("char pointer = %d\n", p);

    // адрес double
    double d = -1;
    p = &d;
    printf("double pointer = %d\n", p);

    // разименовывать указатель типа void нельзя
    // printf("%d\n", *p); // ошибка компиляции

    // но к нему можно применять операцию явного приведения типов
    p = &i;
    printf("cast pointer type %d\n", *(int*)p); // 450
    p = &c;
    printf("cast pointer type %c\n", *(char*)p); // Z
    p = &d;
    printf("cast pointer type %lf\n", *(double*)p); // -1.0

    // usecase для типа void*
    p = &i;
    print_abstract(p, 'I'); // 450
    p = &c;
    print_abstract(p, 'C'); // Z
    p = &d;
    print_abstract(p, 'D'); // -1.0

    return 0;
}

// usecase для типа void*
void print_abstract(void *p, char marker) {
    if (marker == 'I') {
        printf("%d\n", *(int *)p);
    } else if (marker == 'C') {
        printf("%c\n", *(char *)p);
    } else if (marker == 'D') {
        printf("%lf\n", *(double *)p);
    } else {
        printf("Unknown type");
        exit(1);
    }
}