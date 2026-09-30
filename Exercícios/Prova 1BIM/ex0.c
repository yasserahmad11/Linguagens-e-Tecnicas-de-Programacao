#include <stdio.h>

int main() {
    int n1, n2, n3, n4;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    printf("Digite o quarto numero: ");
    scanf("%d", &n4);

    if (n1 % 2 != 0) {
        if (n1 % 5 == 0) {
            printf("%d e impar e multiplo de 5\n", n1);
        }
    }
    if (n2 % 2 != 0) {
        if (n2 % 5 == 0) {
            printf("%d e impar e multiplo de 5\n", n2);
        }
    }
    if (n3 % 2 != 0) {
        if (n3 % 5 == 0) {
            printf("%d e impar e multiplo de 5\n", n3);
        }
    }
    if (n4 % 2 != 0) {
        if (n4 % 5 == 0) {
            printf("%d e impar e multiplo de 5\n", n4);
        }
    }

    return 0;
}