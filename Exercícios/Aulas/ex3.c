/*Faça um programa que calcule a média aritmética entre
três valores informados. Mostre a média na tela.*/

#include <stdio.h>
int main(){
    // Variáveis
    int num1, num2, num3;

    // Usuário informa os valores
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);

    // Cálculo da média aritimética
    float media = (num1 + num2 + num3) / 3;
    printf("A média aritimética é: %f", media);
    return 0;
}
