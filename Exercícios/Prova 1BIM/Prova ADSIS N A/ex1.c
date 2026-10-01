#include <stdio.h>
#include <math.h>
int main(){
    float imc, peso, altura;

    printf("Digite seu peso em quilogramas(kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura em metros(m): ");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);

    if (imc < 18.5){
        printf("IMC: %f\nClassificação: Abaixo do peso.", imc);
    }
    else if (imc >= 18.5 && imc <= 24.9){
        printf("IMC: %f\nClassificação: Normal.", imc);
    }
    else if (imc >= 25.0 && imc <= 29.9){
        printf("IMC: %f\nClassificação: Acima do peso.", imc);
    }
    else{
        printf("IMC: %f\nClassificação: Obeso.", imc);
    }
}