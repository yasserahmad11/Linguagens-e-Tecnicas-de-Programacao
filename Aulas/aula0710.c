/*Crie um programa que leia 10 números do teclado e mostre na tela o maior entre 
os 5 primeiros e o menor entre os restantes*/

#include <stdio.h>
int main(){
    int valor[10];
    int i, maior, menor;

    // para (inicial; condição; incremento)
    for (i = 0; i < 10; i++){
        scanf("%d", &valor[i]);
    }
    return 0;
}