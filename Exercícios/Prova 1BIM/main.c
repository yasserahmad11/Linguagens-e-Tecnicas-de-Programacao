#include <stdio.h>

// PROVA ESOFT M A
void ex00(){
    int n1, n2, n3, n4;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    printf("Digite o quarto numero: ");
    scanf("%d", &n4);
    if (n1 % 2 != 0) {
        if (n1 % 5 == 0) {
            printf("%d e impar e multiplo de 5\n", n1);
        }
    }
    if (n2 % 2 != 0) {
        if (n2 % 5 == 0) {
            printf("%d e impar e multiplo de 5\n", n2);
        }
    }
    if (n3 % 2 != 0) {
        if (n3 % 5 == 0) {
            printf("%d e impar e multiplo de 5\n", n3);
        }
    }
    if (n4 % 2 != 0) {
        if (n4 % 5 == 0) {
            printf("%d e impar e multiplo de 5\n", n4);
        }
    }
}
void ex01(){
    int itens, capacidade, mochilas;
    printf("Digite a quantidade de itens: ");
    scanf("%d", &itens);
    printf("Digite a capacidade de cada mochila: ");
    scanf("%d", &capacidade);
    mochilas = itens / capacidade;
    if (mochilas < 1) {
        printf("Haverá uma mochila que sobrará espaço.\n");
    } 
    else {
        printf("Número de mochilas totalmente preenchidas: %d\n", mochilas);
    }
}
void ex02(){
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
}
// MENU ESOFT M A
void menuESOFTMA() {
    int op;
    printf("\n===== ESOFT M A =====\n");
    printf("(0) Exercício 0\n");
    printf("(1) Exercício 1\n");
    printf("(2) Exercício 2\n");
    printf("Escolha o exercício: ");
    scanf("%d", &op);
    switch (op) {
        case 0:
            ex00();
            break;
        case 1:
            ex01();
            break;
        case 2:
            ex02();
            break;
        default:
            printf("Opção inválida!\n");
    }
}

// PROVA ESOFT M B
void ex10(){
    int itens, capacidade, mochilas, resto;
    printf("Digite a quantidade de itens: ");
    scanf("%d", &itens);
    printf("Digite a capacidade de cada mochila: ");
    scanf("%d", &capacidade);
    mochilas = itens / capacidade;
    resto = itens % capacidade;
    printf("Número de mochilas totalmente preenchidas: %d\n", mochilas);
    printf("Sobram: %d itens.", resto);
}
void ex11(){
    int a, b, c;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b || a == c || b == c) {
        printf("Os números têm que ser distintos!");
    }
    else {
        if (a < b && b < c) {
            printf("Ordem crescente: %d %d %d", a, b, c);
        }
        else if (a < c && c < b) {
            printf("Ordem crescente: %d %d %d", a, c, b);
        }
        else if (b < a && a < c) {
            printf("Ordem crescente: %d %d %d", b, a, c);
        }
        else if (b < c && c < a) {
            printf("Ordem crescente: %d %d %d", b, c, a);
        }
        else if (c < a && a < b) {
            printf("Ordem crescente: %d %d %d", c, a, b);
        }
        else {
            printf("Ordem crescente: %d %d %d", c, b, a);
        }
    }
}
void ex12(){
    float num1, num2;
    int operador;
    printf("======= OPERAÇÕES =======\n");
    printf("(1) Maior que\n");
    printf("(2) Menor que\n");
    printf("(3) Igual a\n");
    printf("(4) Diferente de\n\n");
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);
    printf("Digite o código da operação (1, 2, 3 ou 4): ");
    scanf("%d", &operador);
    if (operador == 1) {
        if (num1 > num2) {
            printf("Verdadeiro");
        }
        else {
            printf("Falso");
        }
    }
    else if (operador == 2) {
        if (num1 < num2) {
            printf("Verdadeiro");
        }
        else {
            printf("Falso");
        }
    }
    else if (operador == 3) {
        if (num1 == num2) {
            printf("Verdadeiro");
        }
        else {
            printf("Falso");
        }
    }
    else if (operador == 4) {
        if (num1 != num2) {
            printf("Verdadeiro");
        }
        else {
            printf("Falso");
        }
    }
    else {
        printf("operador invalido");
    }
}
// MENU ESOFT M B
void menuESOFTMB() {
    int op;
    printf("\n===== ESOFT M B =====\n");
    printf("(0) Exercício 10\n");
    printf("(1) Exercício 11\n");
    printf("(2) Exercício 12\n");
    printf("Escolha o exercício: ");
    scanf("%d", &op);
    switch (op) {
        case 0:
            ex10();
            break;
        case 1:
            ex11();
            break;

        case 2:
            ex12();
            break;
        default:
            printf("Opção inválida!\n");
    }
}



int main() {
    int prova;

    printf("========= MENU PRINCIPAL =========\n");
    printf("(1) ESOFT M A\n");
    printf("(2) ESOFT M B\n");
    printf("(3) ADS A\n");
    printf("Escolha a prova: ");
    scanf("%d", &prova);

    switch (prova) {
        case 1:
            menuESOFTMA();
            break;
        case 2:
            menuESOFTMB();
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}