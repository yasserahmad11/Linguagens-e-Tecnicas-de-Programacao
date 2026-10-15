#include <stdio.h>
int main(){
    int i, j, k, n, r;
    // Vamos relembrar algumas estruturas que vimos essa semana.
    /*Laço FOR repete um conjunto de instruções, de um valor inicial (inicialização), até uma determinada
    condição, realizando uma operação (incremento) a cada execução[sempre]*/

    for (i = 0, j = 1; i < 10; i++, j--){
        printf("Esse é o Laço FOR\n");
    }

    /*Laço WHILE (enquanto), que testa se uma condição é verdadeira, caso seja, executa um bloco de comando
    repetindo o processo enquanto a condição for avaliada como verdadeira*/

    while (i < 10){
        printf("%d, Laço WHILE\n", i);
        if(n % 2 == 0)i++;
        n++;
    }

    /*Laço DO WHILE , semelhante ao laço WHILE, porém antes de realizar a verificação ele executa o conjunto 
    de instruções para após a execução realizar a verificação da condição.*/

    do{
        printf("%d, Laço DO\n", i);
        if(n % 2 == 0)i++;
        n++;
    } while (i < 10);

    return 0;
}