#include <stdio.h>

int main() {
    float num1, num2;
    int operador;

    printf("======= OPERAÇÕES =======\n");
    printf("(1) Maior que\n");
    printf("(2) Menor que\n");
    printf("(3) Igual a\n");
    printf("(4) Diferente de\n\n");

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    printf("Digite o código da operação (1, 2, 3 ou 4): ");
    scanf("%d", &operador);

    if (operador == 1) {
        if (num1 > num2) {
            printf("Verdadeiro");
        }
        else {
            printf("Falso");
        }
    }
    else if (operador == 2) {
        if (num1 < num2) {
            printf("Verdadeiro");
        }
        else {
            printf("Falso");
        }
    }
    else if (operador == 3) {
        if (num1 == num2) {
            printf("Verdadeiro");
        }
        else {
            printf("Falso");
        }
    }
    else if (operador == 4) {
        if (num1 != num2) {
            printf("Verdadeiro");
        }
        else {
            printf("Falso");
        }
    }
    else {
        printf("operador invalido");
    }

    return 0;
}