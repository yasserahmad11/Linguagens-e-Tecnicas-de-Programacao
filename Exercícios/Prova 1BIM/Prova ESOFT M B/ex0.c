#include <stdio.h>

int main() {
    int itens, capacidade, mochilas, resto;

    printf("Digite a quantidade de itens: ");
    scanf("%d", &itens);

    printf("Digite a capacidade de cada mochila: ");
    scanf("%d", &capacidade);

    mochilas = itens / capacidade;
    resto = itens % capacidade;

    printf("Número de mochilas totalmente preenchidas: %d\n", mochilas);
    printf("Sobram: %d itens.", resto);

    return 0;
}