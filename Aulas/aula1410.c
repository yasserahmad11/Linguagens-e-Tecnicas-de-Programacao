/*Leia um valor par e mostre sua raiz*/
#include <stdio.h>
#include <math.h>
int main(){
    int valor;
    printf("Digite um valor par: ");
    scanf("%d", &valor);

    while (valor % 2 == 1){
        printf("Valor inválido\nDigite um valor par: ");
        scanf("%d", &valor);
    }
    printf("Raiz de %d = %.2f", valor, sqrt(valor));

    return 0;
}