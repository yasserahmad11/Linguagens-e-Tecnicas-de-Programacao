/*Faça um programa que receba o raio de um círculo,
calcule e mostre sua área. (Área = π * R2 )*/

#include <stdio.h>
int main(){
    //Variável
    float raio;

    //Usuário digita o valor do raio
    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);

    //Cálculo da área do círculo
    float area = 3.14 * raio * raio;
    printf("A área do círculo é: %f", area);
    
    return 0;
}