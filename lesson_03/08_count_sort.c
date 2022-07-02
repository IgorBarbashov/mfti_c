#include <stdio.h>
#include <stdbool.h>

#define ALLOCATED_SIZE 1000

int array_input(int A[], int max_size) {
    int top = 0;

    while(true) {
        int x;
        scanf("%d", &x);

        // проверка на терминальный символ или превышение размера буффера
        if (x == 10 || top == max_size) {
            break;
        }

        // проверка допустимых значений
        if (x < 0 || x > 9) {
            continue;
        }

        A[top] = x;
        top++;
    }

    return top;
}

void array_print(int A[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

// линейное время O(n)
// константная память O(1)
// применима при небольшой известной базе
void array_count_sort(int A[], int size) {
    int counts[10] = {0};
    // первая часть сортировки подсчетом называется частнотный анализ
    for (int i = 0; i < size; i++) {
        counts[A[i]]++;
    }
    int index = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < counts[i]; j++) {
            A[index] = i;
            index++;
        }
    }
}

int main(int argc, char* argv[]) {
    int A[ALLOCATED_SIZE];

    // всю сортировку можно совместить с вводом
    // здесь пример с раздельными функциями ввода и сортировки
    int t = array_input(A, ALLOCATED_SIZE);
    array_count_sort(A, t);
    array_print(A, t);

    return 0;
}