#include <stdio.h>

int main() {
    int A = 6;
    int B = 0;
    int C = 0;

    printf("Inicio:\n");
    printf("A = %d | B = %d | C = %d\n\n", A, B, C);

    A = A - 1;
    C = C + 1;

    printf("Movimento 1 - Disco 1: A -> C\n");
    printf("A = %d | B = %d | C = %d\n\n", A, B, C);

    A = A - 2;
    B = B + 2;

    printf("Movimento 2 - Disco 2: A -> B\n");
    printf("A = %d | B = %d | C = %d\n\n", A, B, C);

    C = C - 1;
    B = B + 1;

    printf("Movimento 3 - Disco 1: C -> B\n");
    printf("A = %d | B = %d | C = %d\n\n", A, B, C);

    A = A - 3;
    C = C + 3;

    printf("Movimento 4 - Disco 3: A -> C\n");
    printf("A = %d | B = %d | C = %d\n\n", A, B, C);

    B = B - 1;
    A = A + 1;

    printf("Movimento 5 - Disco 1: B -> A\n");
    printf("A = %d | B = %d | C = %d\n\n", A, B, C);

    B = B - 2;
    C = C + 2;

    printf("Movimento 6 - Disco 2: B -> C\n");
    printf("A = %d | B = %d | C = %d\n\n", A, B, C);

    A = A - 1;
    C = C + 1;

    printf("Movimento 7 - Disco 1: A -> C\n");
    printf("A = %d | B = %d | C = %d\n\n", A, B, C);

    printf("Resultado final:\n");
    printf("A = %d | B = %d | C = %d\n", A, B, C);

    return 0;
}