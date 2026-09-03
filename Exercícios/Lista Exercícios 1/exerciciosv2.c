#include <stdio.h>
#include <math.h>
#define pi 3.141592

void ex1(){
    //Variáveis
    int num1, num2, aux;
    //Usuário informa os números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    //Auxiliar
    aux = num1;
    num1 = num2;
    num2 = aux;
    //Programa imprime na ordem inversa
    printf("Números informados exibidos na ordem inversa: %d e %d\n\n", num1, num2);
}
void ex2(){
    //Variáveis
    double numero;
    //Usuário insere o número
    printf("Digite um número: ");
    scanf("%lf", &numero);
    //Imprime em notação científica
    printf("Número em notação científica: %e\n\n", numero);
}
void ex3(){
    //Variáveis
    int n, resto1, resto2, resto3, resto4, resto5, resto6, resto7;
    //Usuário informa o números
    printf("Digite um número: ");
    scanf("%d", &n);
    //Cálculo para binário
    resto1 = n % 2;
    n = n / 2;
    resto2 = n % 2;
    n = n / 2;
    resto3 = n % 2;
    n = n / 2;
    resto4 = n % 2;
    n = n / 2;
    resto5 = n % 2;
    n = n / 2;
    resto6 = n % 2;
    n = n / 2;
    resto7 = n % 2;
    n = n / 2;
    //Imprime em binário na tela
    printf("%d%d%d%d%d%d%d\n", resto7, resto6, resto5, resto4, resto3, resto2, resto1);
}
void ex4(){
    //Variáveis
    float salario, vendas, comissao, total;
    //Usuário insere os valores
    printf("Digite o valor do salário fixo do vendedor: ");
    scanf("%f", &salario);
    printf("Digite o valor total em vendas do vendedor: ");
    scanf("%f", &vendas);
    //Cálculo da comissão
    comissao = vendas * 0.15;
    total = salario + comissao;
    printf("O valor total a receber é de %f reais.\n\n", total);
}
void ex5(){
     //Variáveis
    float n1, n2, n3, n4, soma, media, produtorio;
    //Usuário insere os valores
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    printf("Digite o terceiro número: ");
    scanf("%f", &n3);
    printf("Digite o quarto número: ");
    scanf("%f", &n4);
    //Cálculo soma, média e produtório
    soma = n1 + n2 + n3 + n4;
    media = soma / 4;
    produtorio = n1 * n2 * n3 * n4;
    //Imprimir na tela
    printf("A soma de dos número informados é: %f\n", soma);
    printf("A média dos números informados é: %f\n", media);
    printf("O produtório dos números informados é: %f\n\n", produtorio);
}
void ex6(){
    //Variável
    int anos, meses, dias, resto;
    //Usuário informa a idade em dias 
    printf("Digite sua idade em dias: ");
    scanf("%d", &dias);
    //Cálculo da idade em meses e dias
    anos = dias / 365;
    resto = dias % 365;
    meses = resto / 30;
    dias = resto % 30;
    //Imprime na tela
    printf("Sua idade: %d anos, %d meses e %d dias\n\n", anos, meses, dias);
}
void ex7(){
   // Variáveis
    float raio, volume;
    // Usuário informa o raio
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    // Cálculo do volume
    volume = (4.0 / 3.0) * pi * raio * raio * raio;
    // Imprime o resultado
    printf("Volume = %.3f\n\n", volume); 
}
void ex8(){
    //Variáveis
    float x1, y1, x2, y2, distancia;
    //Usuário insere os valores
    printf("Digite x1: ");
    scanf("%f", &x1);
    printf("Digite y1: ");
    scanf("%f", &y1);
    printf("Digite x2: ");
    scanf("%f", &x2);
    printf("Digite y2: ");
    scanf("%f", &y2);
    //Cálculo da distância euclidiana
    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("Distancia = %f\n\n", distancia);
}

int main(){
    int op;
    printf("\n========== MENU ==========\n");
    printf("Escolha o exercício:\n");
    printf("(1) (2) (3) (4) (6) (7) (8)\n");
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
        break;
        case 7:
            ex7();
        break;
        case 8:
            ex8();
        break;
        default:
        printf("Opcao invalida! Escolha um numero de 1 a 10.\n");
    }
}
