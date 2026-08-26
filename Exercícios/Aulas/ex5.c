#include <stdio.h>
int main(){
    int num, inverso, quadrado;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if(num >= 0){
        printf("O inverso de %d é -%d", num, num);
    }
    else{
        quadrado = num * num;
        printf("O quadrado de %d é %d", num, quadrado);
    }

    return 0;
}