/*Faça um programa que leia 10 numeros, mostre o maior entre os 5 primeiros e o menor entre os restantes*/
#include <stdio.h>
int compara (int a, int b){
    if (a > b) return a;
    else return b;
}

int main(){
    int valores[10];
    int i, maior, menor;

    printf("Vamos ler os valores: \n");
    // para (inicial; condição; incremento)
    for (i = 0; i < 10; i++){
        scanf("%d", &valores[i]);
    }
    for (i = 1, maior = valores[0]; i < 5; i+=2){
        int temp = compara(valores[i], valores[i+1]);
        maior = compara(maior, temp);
    }
    printf("\nMaior valor entre os 5 primeiros: %d", maior);
     return 0;
}