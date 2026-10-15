#include <stdio.h>
// Exercício 1
/* Elabore um programa que permita a entrada de 3 valores e conte do primeiro valor inserido até o segundo valor,
com o passo da contagem dado pelo terceiro valor */
//ex: 1, 8, 2 >> contar de 1 a 8, com passo 2 = 3, 5, 7.
void ex1(){
    int i, num1, num2, num3;
    printf("Digite o valor inicial, final e passo: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num2 < num1){
        for (i = num1; i >= num2; i -= num3){
            printf("Contagem: %d\n", i);
        }
    }
    else if (num3 <= 0){
        printf("O passo da contagem deve ser maior que zero.\n");
    }
    else{
        for (i = num1; i <= num2; i += num3){
            printf("Contagem: %d\n", i);
        }
    }
}
// Exercício 2
/* Faça um programa que receba um número n e realize a soma dos n primeiros termos da sequência definida como: 
[S = 1/2; 1/4; 1/8; 1/16; ... N] */
void ex2(){
    int n, i;
    float soma = 0, termo = 0.5;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        soma = soma + termo;
        termo = termo / 2;
    }

    printf("Soma dos termos: %.4f\n", soma);
}
// Exercício 3
/* Crie um programa que exiba na tela, o triângulo de Pascal */


int main(){
    int op;
    while (op != 0){
        printf("\n===== Exercícios =====\n");
        printf("(1) Exercício 1\n(2) Exercício 2\n(3) Exercício 3\n(0) Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &op);

        switch (op){
        case 1:
            ex1();
            break;
        case 2:
            ex2();
            break;
        case 3:
            // ex3();
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
        }
    }
    
    return 0;
}