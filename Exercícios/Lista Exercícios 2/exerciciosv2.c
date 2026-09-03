#include <stdio.h>
#include <stdlib.h>

/*tipo nome (lista de parâmetros){
    comandos
    comandos...
}
*/
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



int main(){
    int op;
    printf("Insira qual exercício quer resolver: (2) (3) (8)");
    scanf("%d", &op);

    switch(op){
        case 3:
            ex3();
        break;
        
        case 4:
            ex4();
        break;

        case 8:
            ex8();
        break;
    }
}
