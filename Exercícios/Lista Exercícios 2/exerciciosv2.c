#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

/*tipo nome (lista de parâmetros){
    comandos
    comandos...
}
*/
void ex1(){
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
}
void ex2(){
    //Variáveis
    float kmh, ms;
    //Usuário insere a velocidade em km/h
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);
    //Cálculo de km/h para m/s
    ms = kmh / 3.6;
    //Imprime a velocidade em m/s na tela
    printf("%.2f km/h é igual a %.2f m/s\n\n", kmh, ms);
}
void ex3(){
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
    printf("%.2f reais é igual a %.2f dólares", real, dolar);
}
void ex4(){
    //Variáveis
    float celsius, fahrenheit;
    //Usuário insere a temperatura em graus
    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &celsius);
    //Cálculo de celsius para fahrenheit
    fahrenheit = celsius * (9.0 / 5.0) + 32.0;
    //Imprime na tela a temperatura em fahrenheit
    printf("%.2f graus Celsius é igual a %.2f graus Fahrenheit", celsius, fahrenheit);
}
void ex5(){
    //Variáveis
    float graus, radianos;
    //Usuário informa o ângulo em graus
    printf("Digite o valor do ângulo em graus: ");
    scanf("%f", &graus);
    //Cálculo graus para radianos
    radianos = graus * (pi / 180.0);
    //Imprime na tela o ângulo em radianos
    printf("O ângulo de %.2f graus é %.2f radianos\n\n", graus, radianos);
}
void ex6(){
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
}
void ex7(){
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
}
void ex8(){
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
    printf("%d:%d:%d", horas, minutos, segundosRestantes);
}
void ex9(){
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
}
void ex10(){
    //Variáveis
    int a, b, c, r;
    //Usuário insere os valores
    printf("Entre com os valores para A B C: ");
    scanf("%d %d %d", &a, &b, &c);
    //Condições
    if(a > b){
        r = a;
    }
    else{
        r = b;
    }
    if(c > r){
        r = c;
    }
    printf("%d eh o maior", r);
}

int main(){
    int op;
    printf("\n======= MENU =======\n");
    printf("Escolha o exercício:\n");
    printf("(1) (2) (3) (4) (5)\n");
    printf("(6) (7) (8) (9) (10)\n");
    printf("Opção: ");
    scanf("%d", &op);

    switch(op){
        case 1:
            ex1();
        break;
        case 2:
            ex2();
        break;
        case 3:
            ex3();
        break;
        case 4:
            ex4();
        break;
        case 5:
            ex5();
        break;
        case 6:
            ex6();
        case 7:
            ex7();
        case 8:
            ex8();
        break;
        case 9:
            ex9();
        break;
        case 10:
            ex10();
        break;
        default:
        printf("Opcao invalida! Escolha um numero de 1 a 10.\n");
    }
}
