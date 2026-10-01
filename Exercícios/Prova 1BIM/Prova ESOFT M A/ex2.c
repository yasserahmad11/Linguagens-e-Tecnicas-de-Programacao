#include <stdio.h>

int main() {
    float valor, resultado;
    int origem, destino;

    printf("\n===== UNIDADES =====\n");
    printf("1 - Celsius\n");
    printf("2 - Fahrenheit\n");
    printf("3 - Kelvin\n");
    printf("4 - Metro\n");
    printf("5 - Milha\n");
    printf("8 - Quilograma\n");
    printf("9 - Libra\n");
    printf("10 - km/h\n");
    printf("11 - mph\n");

    printf("\nDigite o valor a ser convertido: ");
    scanf("%f", &valor);
    printf("\nDigite o codigo da unidade de origem: ");
    scanf("%d", &origem);
    printf("Digite o codigo da unidade de destino: ");
    scanf("%d", &destino);

    // Celsius para Fahrenheit
    if (origem == 1 && destino == 2) {
        resultado = valor * 1.8 + 32;
        printf("Resultado: %.2f Fahrenheit\n", resultado);
    }
    // Fahrenheit para Celsius
    else if (origem == 2 && destino == 1) {
        resultado = (valor - 32) / 1.8;
        printf("Resultado: %.2f Celsius\n", resultado);
    }
    // Celsius para Kelvin
    else if (origem == 1 && destino == 3) {
        resultado = valor + 273.15;
        printf("Resultado: %.2f Kelvin\n", resultado);
    }
    // Kelvin para Celsius
    else if (origem == 3 && destino == 1) {
        resultado = valor - 273.15;
        printf("Resultado: %.2f Celsius\n", resultado);
    }
    // Metro para Milha
    else if (origem == 4 && destino == 5) {
        resultado = valor / 1609.34;
        printf("Resultado: %.2f milhas\n", resultado);
    }
    // Milha para Metro
    else if (origem == 5 && destino == 4) {
        resultado = valor * 1609.34;
        printf("Resultado: %.2f metros\n", resultado);
    }
    // Quilograma para Libra
    else if (origem == 8 && destino == 9) {
        resultado = valor * 2.205;
        printf("Resultado: %.2f libras\n", resultado);
    }
    // Libra para Quilograma
    else if (origem == 9 && destino == 8) {
        resultado = valor / 2.205;
        printf("Resultado: %.2f quilogramas\n", resultado);
    }
    // km/h para mph
    else if (origem == 10 && destino == 11) {
        resultado = valor / 1.609;
        printf("Resultado: %.2f mph\n", resultado);
    }
    // mph para km/h
    else if (origem == 11 && destino == 10) {
        resultado = valor * 1.609;
        printf("Resultado: %.2f km/h\n", resultado);
    }
    else {
        printf("Erro: unidade de conversao invalida.\n");
    }

    return 0;
}