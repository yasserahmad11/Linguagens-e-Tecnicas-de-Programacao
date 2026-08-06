/*Faça um programa que receba dois número, efetue a
soma e mostre o resultado na tela. */

#include <stdio.h>
int main(){
    // Variáveis
    int x, y;

    // Usuário digita os números
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    printf("Digite o segundo número: ");
    scanf("%d", &y);

    // Cálculo da soma
    int soma = x + y;
    printf("A soma de %d + %d = %d", x, y, soma);
    
    return 0;
}