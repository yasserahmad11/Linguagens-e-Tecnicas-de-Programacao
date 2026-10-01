#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5;

    printf("Digite 5 números inteiros: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    if (n2 == n1 + 1) {
        printf("Consecutivos: %d %d\n", n1, n2);
    }

    if (n3 == n2 + 1) {
        printf("Consecutivos: %d %d\n", n2, n3);
    }

    if (n4 == n3 + 1) {
        printf("Consecutivos: %d %d\n", n3, n4);
    }

    if (n5 == n4 + 1) {
        printf("Consecutivos: %d %d\n", n4, n5);
    }

    return 0;
}