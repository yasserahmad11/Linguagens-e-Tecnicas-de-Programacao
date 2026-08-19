#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main(){
    //EXERCÍCIO 1
    //Váriaveis
    int idade, ano, nascimento;

    //Usuário insere a idade em anos
    printf("Digite sua idade ao final do ano: ");
    scanf("%d", &idade);
    printf("Digite o ano atual: ");
    scanf("%d", &ano);

    //Cálculo do ano de nascimento
    nascimento = ano - idade;

    //Imprime na tela o ano de nascimento
    printf("Você nasceu em %d\n\n", nascimento);


    //EXERCÍCIO 2
     //Variáveis
    float kmh, ms;

    //Usuário insere a velocidade em km/h
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    //Cálculo de km/h para m/s
    ms = kmh / 3.6;

    //Imprime a velocidade em m/s na tela
    printf("%.2f km/h é igual a %.2f m/s\n\n", kmh, ms);


    //EXERCÍCIO 3
    //Variáveis
    float real, dolar;

    //Usuário insere o valor em real e a cotação do dólar
    printf("Digite o valor em reais: ");
    scanf("%f", &real);
    printf("Digite a cotação do dólar: ");
    scanf("%f", &dolar);

    //Cálculo de real para dólar
    dolar = real / dolar;

    //Imprime na tela o valor em dólar
    printf("%.2f reais é igual a %.2f dólares\n\n", real, dolar);


    //EXERCÍCIO 4
    //Variáveis
    float celsius, fahrenheit;

    //Usuário insere a temperatura em graus
    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &celsius);

    //Cálculo de celsius para fahrenheit
    fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    //Imprime na tela a temperatura em fahrenheit
    printf("%.2f graus Celsius é igual a %.2f graus Fahrenheit\n\n", celsius, fahrenheit);


    //EXERCÍCIO 5
     //Variáveis
    float graus, radianos;

    //Usuário informa o ângulo em graus
    printf("Digite o valor do ângulo em graus: ");
    scanf("%f", &graus);

    //Cálculo graus para radianos
    radianos = graus * (pi / 180.0);

    //Imprime na tela o ângulo em radianos
    printf("O ângulo de %.2f graus é %.2f radianos\n\n", graus, radianos);


    //EXERCÍCIO 6
     //Variáveis
    int numero, antecessor, sucessor;

    //Usuário informa o número
    printf("Digite um número: ");
    scanf("%d", &numero);

    //Antecessor e Sucessor
    antecessor = numero - 1;
    sucessor = numero + 1;

    //Imprime na tela o número, seu antecessor e sucessor
    printf("O antecessor de %d é %d e o sucessor é %d\n\n", numero, antecessor, sucessor);


    //EXERCÍCIO 7
    //Variáveis
    float total, primeiro, segundo, terceiro;
    total = 780000;

    //Cálculo de quanto cada um receberá
    primeiro = total * 0.46;
    segundo = total * 0.32;
    terceiro = total - primeiro - segundo;

    //Imprime na tela a quantia recebida por cada um dos ganhadores
    printf("Importância: %f\n", total);
    printf("Quantia recebida pelo primeiro ganhador: %.2f\n", primeiro);
    printf("Quantia recebida pelo segundo ganhador: %.2f\n", segundo);
    printf("Quantia recebida pelo terceiro ganhador: %.2f\n\n", terceiro);


    //EXERCÍCIO 8
    //Variáveis
    int segundos, horas, minutos, segundosRestantes;

    //Usuário insere o tempo em segundos
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    //Cálculos
    horas = segundos / 3600;
    segundosRestantes = segundos % 3600;
    minutos = segundosRestantes / 60;
    segundosRestantes = segundosRestantes % 60;

    //Imprime na tela
    printf("%d:%d:%d\n\n", horas, minutos, segundosRestantes);


    //EXERCÍCIO 9
    //Variáveis
    float tempo, velocidade, distancia, litros;

    //Usuário insere o tempo e a velocidade média
    printf("Digite o tempo da viagem em horas: ");
    scanf("%f", &tempo);
    printf("Digite a velocidade média em km/h: ");
    scanf("%f", &velocidade);

    //Cálculo da distância percorrida
    distancia = tempo * velocidade;
    //Cálculo da quantidade de litros gastos
    litros = distancia / 12;

    //Imprime na tela 
    printf("Litros gastos: %.3f\n\n", litros);


    //EXERCÍCIO 10
    // Variáveis
    int a, b, c, maiorAB, maior;
    
    // Usuário informa os três valores
    printf("Digite um valor: ");
    scanf("%d", &a);
    printf("Digite um valor: ");
    scanf("%d", &b);
    printf("Digite um valor: ");
    scanf("%d", &c);

    // Calcula o maior entre A e B
    maiorAB = (a + b + abs(a - b)) / 2;

    // Calcula o maior entre o resultado anterior e C
    maior = (maiorAB + c + abs(maiorAB - c)) / 2;

    // Imprime o maior
    printf("%d eh o maior\n", maior);

    return 0;
}
