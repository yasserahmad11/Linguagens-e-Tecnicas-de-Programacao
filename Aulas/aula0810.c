/*Faça um programa que leia 10 numeros, mostre o maior entre os 5 primeiros e o menor entre os restantes*/
#include <stdio.h>
int compara_maior (int a, int b){
    if (a > b) return a;
    else return b;
}
int compara_menor (int a, int b){
    if (a < b) return a;
    else return b;
}

int main(){
    int valores[10];
    int i, maior, menor;

    printf("Vamos ler os valores: \n");
    // para (inicial; condição; incremento)
    for (i = 0; i < 10; i++){
        printf("%d - ", i+1);
        scanf("%d", &valores[i]);
    }
    for (i = 1, maior = valores[0]; i < 5; i+=2){
        int temp = compara_maior(valores[i], valores[i+1]);
        maior = compara_maior(maior, temp);
    }
    for (i = 6, menor = valores[5]; i < 9; i+=2){
        int temp = compara_menor(valores[i], valores[i+1]);
        menor = compara_menor(menor, temp);
    }
    printf("\nMaior valor entre os 5 primeiros: %d\n", maior);
    printf("\nMenor valor entre os restantes: %d\n", menor);
     return 0;
}