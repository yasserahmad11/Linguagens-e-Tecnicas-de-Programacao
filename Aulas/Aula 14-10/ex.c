#include <stdio.h>
/*Elabore um programa que peça ao usuário para digitar 10 número que sejam inteiros positivos,
e ignorando os negativos. E mostre na tela o resultado da soma e a média desses valores.
    
-- OBS: não precisa usar vetor, usem os laços da aula de hoje
                                 while e do-while
*/
int main(){
   int i = 0, num, soma = 0, media;
   
   do{
    printf("%d - Digite um número inteiro positivo: ", i + 1);
    scanf("%d", &num);
        if(num >= 0){
            soma += num;
            i++;
        } else {
            printf("Número inválido, digite novamente.\n");
        }
    } while(i < 10);

   media = soma / 10;
   printf("A soma dos números digitados é: %d\n", soma);
   printf("A média dos números digitados é: %d\n", media);

   return 0;
}