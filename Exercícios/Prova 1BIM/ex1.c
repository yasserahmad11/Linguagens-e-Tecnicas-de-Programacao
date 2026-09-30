#include <stdio.h>

int main() {
    int itens, capacidade, mochilas;

    printf("Digite a quantidade de itens: ");
    scanf("%d", &itens);

    printf("Digite a capacidade de cada mochila: ");
    scanf("%d", &capacidade);

    mochilas = itens / capacidade;

    if (mochilas < 1) {
        printf("Haverá uma mochila que sobrará espaço.\n");
    } 
    else {
        printf("Número de mochilas totalmente preenchidas: %d\n", mochilas);
    }

    return 0;
}