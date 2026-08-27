#include  <stdio.h>
#include <math.h>
int main(){
    //Variáveis
    int num1, num2, soma, subtracao, multiplicacao, divisao, inverso1, inverso2;
    float area, hipotenusa;

    //Usuário insere os dois valores
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);

    if(num1 >= 0 && num2 >= 0){
        if(num1 && num2 < 10){
            if ((num1 == 2 || num1 == 3 || num1 == 5 || num1 == 7) && (num2 == 2 || num2 == 3 || num2 == 5 || num2 == 7)){
                area = (num1 * num2) / 2;
                hipotenusa = sqrt(pow(num1, 2) + pow(num2, 2));
                printf("A área do triângulo com os valores inseridos é igual a %f\n", area);
                printf("A hipotenusa do triângulo com os valores inseridos é igual a %f\n", hipotenusa);
            } else{
                soma = num1 + num2;
                subtracao = num1 - num2;
                multiplicacao = num1 * num2;
                divisao = num1 / num2;
                printf("%d + %d = %d\n", num1, num2, soma);
                printf("%d - %d = %d\n", num1, num2, subtracao);
                printf("%d * %d = %d\n", num1, num2, multiplicacao);
                printf("%d / %d = %d\n", num1, num2, divisao);
            }
        } else{
            if(num1 % num2 == 0){
                printf("%d e %d são múltiplos entre si.", num1, num2);
            }
            else{
                printf("%d e %d não são múltiplos entre si.", num1, num2);
            }
        }
    
    } else{
        inverso1 = num1 * (-1);
        inverso2 = num2 * (-1);
        printf("Inversos de %d e %d respectivamente: %d %d", num1, num2, inverso1, inverso2);
    } 

    return 0;
    

}