#include <stdio.h>
/*Faça um programa que leia uma palavra e verifique se ela é um palíndromo

Entrada: ABBA
Saída: é um palíndromo

Um palíndromo é uma palavra, frase ou número que pode ser lido da esquerda para a direita ou da
direita para a esquerda, mantendo exatamente o mesmo sentido */

int main(){
    int i, j, palindromo;
    char palavra[30];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    printf("Palavra inserida: %s\n", palavra);

    for ( i = 0; i < 30 && palavra[i] != '\0'; i++);
    
    for (j = i-1, i = 0; i < j; i++, j--){
        if (palavra[i] == palavra[j]){
            palindromo = 1;
            continue;
        } 
        else {
            palindromo = 0;
            break;
        }
    }

    if (palindromo == 1){
        printf("é um palíndromo\n");
    } else {
        printf("não é um palíndromo\n");
    }
    return 0;
}
