/*Faça um programa que receba o raio de um círculo,
calcule e mostre sua área. (Área = π * R2 )*/
/*Após isso, faça um programa que receba a base maior, base menor e altura de um trapézio e calcule sua área*/

#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main(){
    //Variável
    float raio;

    //Usuário digita o valor do raio
    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);

    //Cálculo da área do círculo
    float area = pi * raio * raio;
    printf("A área do círculo  de raio %.1f é: %.2f\n", raio, area);

    //Cálculo da área do trapézio
    printf("Agora a área do trapézio!\n");

    float baseMaior;
    printf("Digite o valora da base maior do trapézio: ");
    scanf("%f", &baseMaior);
    
    float baseMenor;
    printf("Digite o valor da base menor do trapézio: ");
    scanf("%f", &baseMenor);

    float altura;
    printf("Digite o valor da altura do trapézio: ");
    scanf("%f", &altura);

    float areaTrapezio = ((baseMaior + baseMenor) * altura) / 2;

    printf("A área do trapézio de base maior %.1f, base menor %1.f e altura %1.f é = %2.f", baseMaior, baseMenor, altura, areaTrapezio);
    
    return 0;
}
