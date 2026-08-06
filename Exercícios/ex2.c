/*Faça um programa que calcule a área de um triângulo
retângulo, dados os valores de sua base e altura.*/

#include <stdio.h>
int main(){
    // Variáveis
    int base, altura;

    // Usuário digita os valores
    printf("Digite o valor da base do triângulo retângulo: ");
    scanf("%d", &base);
    printf("Digite o valor da altura do triângulo retângulo: ");
    scanf("%d", &altura);

    // Cálculo da área
    float area = (base * altura) / 2;
    printf("A área do triângulo é: %f", area);

    return 0;
}