#include <stdio.h>
// Exercício 1
/* Elabore um programa que permita a entrada de 3 valores e conte do primeiro valor inserido até o segundo valor,
com o passo da contagem dado pelo terceiro valor */
//ex: 1, 8, 2 >> contar de 1 a 8, com passo 2 = 3, 5, 7.
void ex1(){
    int i, num1, num2, num3;
    printf("Digite 3 números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    for (i = num1; i <= num2; i += num3){
        printf("Contagem: %d\n", i);
    }
}

// Exercício 2
/* Faça um programa que receba um número n e realize a soma dos n primeiros termos da sequência definida como: 
[S = 1/2; 1/4; 1/8; 1/16; ... N] */

// Exercício 3
/* Crie um programa que exiba na tela, o triângulo de Pascal */


int main(){
    ex1();
}