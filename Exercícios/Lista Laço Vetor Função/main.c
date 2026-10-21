#include <stdio.h>
/* 3) Implemente um programa   que leia um número n [com n positivo & n <= 64]  e mostre na tela o seu 
valor em base binária (bits). */
int main(){
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

    return 0;
}