#include <stdio.h>

void ex3(){
    /* 3) Implemente um programa   que leia um número n [com n positivo & n <= 64]  e mostre na tela o seu 
    valor em base binária (bits). */
    int n, aux, mult = 1;
    printf("Digite um numero positivo n (n <= 64): ");
    scanf("%d", &n);
    aux = 0;
    while (n > 0){
        aux = aux + (n % 2) * mult;
        n = n / 2;
        mult = mult * 10;
    }
    printf("O valor em binario é: %d\n", aux);
}


int main(){
    int op;
    printf("====== MENU ======\n");
    printf("(1) Exercício 1\n(2) Exercício 2\n(3) Exercício 3\n(4) Exercício 4\n(5) Exercício 5\n");
    printf("(6) Exercício 6\n(7) Exercício 7\n");
    printf("Opção: ");
    scanf("%d", &op);

    switch(op){
        case 1:
            //ex1();
            break;
        case 2:
            //ex2();
            break;
        case 3:
            ex3();
            break;
        case 4:
            //ex4();
            break;
        case 5:
            //ex5();
            break;
        case 6:
            //ex6();
            break;
        case 7:
            //ex7();
            break;
        default:
            printf("Opção inválida!");
            break;
    }

    return 0;
}