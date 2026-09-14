//Exercícios 2, 3 e 5 realizados em casa como forma de estudo

#include <stdio.h>

int multDigito(int dig, int valor){
    return dig * valor;
}
float media(float nota1, float nota2, float nota3){
    return (nota1 + nota2 + nota3) / 3;
}
float calc_inss(float salario){
    if (salario <= 1412.00) return salario * 0.075;
    else if (salario <= 2666.68) return salario * 0.09;
    else if (salario <= 4000.03) return salario * 0.12;
    else return salario * 0.14;
}
float calc_irpf(float salario){
    if (salario <= 2259.20) return 0;
    else if (salario <= 2826.65) return (salario * 0.075) - 169.44;
    else if (salario <= 3751.05) return (salario * 0.15) - 381.44;
    else if (salario <= 4664.68) return (salario * 0.225) - 662.77;
    else return (salario * 0.275) - 896.00;
}
float calc_salario_bruto(float valor_hora, float horas_trabalhadas){
    return valor_hora * horas_trabalhadas;
}
float calc_salario_liquido(float salario, float inss, float irpf){
    return salario - inss - irpf;
}

void ex1(){
    int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,soma, resto1, resto2, digitoVerificador1, digitoVerificador2;
    printf("Digite o CPF: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9,&d10,&d11);

    soma = multDigito(d1,10)+multDigito(d2,9)+multDigito(d3,8)+multDigito(d4,7)+multDigito(d5,6)+multDigito(d6,5)+multDigito(d7,4)+multDigito(d8,3)+multDigito(d9,2);
    resto1 = soma % 11;
    digitoVerificador1 = 11 - resto1;
    if(digitoVerificador1 >= 10){
        digitoVerificador1 = 0;
    }

    soma = multDigito(d1,11)+multDigito(d2,10)+multDigito(d3,9)+multDigito(d4,8)+multDigito(d5,7)+multDigito(d6,6)+multDigito(d7,5)+multDigito(d8,4)+multDigito(d9,3)+multDigito(d10,2);
    resto2 = soma % 11;
    digitoVerificador2 = 11 - resto2;
    if(digitoVerificador2 >= 10){
        digitoVerificador2 = 0;
    }


    if (digitoVerificador1 == d10 && digitoVerificador2 == d11){
        printf("O CPF é válido!\n");
    }
    else{
        printf("O CPF é inválido!\n");
    }
}
void ex2(){
    float temperatura, conversao;
    char grandeza;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);
    printf("Digite a grandeza (C) Celsius ou (F) Fahrenheit: ");
    scanf(" %c", &grandeza);

    if (grandeza == 'C'){
        conversao = (temperatura * 9.0 /5.0) + 32;
        printf("%.2f˚C = %.2f˚F\n", temperatura, conversao);
    }
    else if (grandeza == 'F'){
        conversao = (temperatura - 32) * 5.0 /9.0;
        printf("%.2f˚F = %.2f˚C\n", temperatura, conversao);
    }
    else{
        printf("Grandeza inválida!\n");
    }
}
void ex3(){
    char nome[50];      //Pesquisado como guardar uma palavra (conjunto de char)
    float nota1, nota2, nota3, resultado, falta;

    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome);     //Pesquisado como utilizar scanf para ler uma string com espaços
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);

    resultado = media(nota1, nota2, nota3);

    //Pesquisado como deixar colorido como foi pedido no comando
    if (resultado >= 7.0){
        printf("Aluno: %s\nMédia: %.2f\nSituação: \033[34mAprovado!\033[0m\n", nome, resultado);
    }
    else if (resultado >= 4.0){
        falta = 10.0 - resultado;
        printf("Aluno: %s\nMédia: %.2f\nSituação: \033[32mExame!\033[0m\n", nome, resultado);
        printf("Falta %.2f pontos para atingir 10.0.\n", falta);
    }
    else{
        printf("Aluno: %s\nMédia: %.2f\nSituação: \033[31mReprovado!\033[0m\n", nome, resultado);
    }

}
void ex5(){
    int valor;
    int nota100, nota50, nota10, nota5, nota2, nota1;

    printf("Digite o valor que deseja sacar: ");
    scanf("%d", &valor);

    nota100 = valor / 100;
    valor = valor % 100;

    nota50 = valor / 50;
    valor = valor % 50;

    nota10 = valor / 10;
    valor = valor % 10;

    nota5 = valor / 5;
    valor = valor % 5;

    nota2 = valor / 2;
    valor = valor % 2;

    nota1 = valor;

    printf("\n========== SAQUE ==========\n");
    printf("Notas de R$100: %d\n", nota100);
    printf("Notas de R$50:  %d\n", nota50);
    printf("Notas de R$10:  %d\n", nota10);
    printf("Notas de R$5:   %d\n", nota5);
    printf("Notas de R$2:   %d\n", nota2);
    printf("Notas de R$1:   %d\n", nota1);
}
void ex9(){
    float salario, inss, irpf;
    float valor_hora, horas_trabalhadas, salario_liquido;

    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valor_hora);

    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &horas_trabalhadas);

    salario = calc_salario_bruto(valor_hora, horas_trabalhadas);
    inss = calc_inss(salario);
    irpf = calc_irpf(salario - inss);
    salario_liquido = calc_salario_liquido(salario, inss, irpf);

    printf("======================================================\n");
    printf("       RECIBO DE PAGAMENTO DE SALARIO\n");
    printf("======================================================\n");
    printf(" Salario Bruto:                 R$ %.2f\n", salario);
    printf(" (-) Desconto INSS:             R$ %.2f\n", inss);
    printf(" (-) Desconto IRPF:             R$ %.2f\n", irpf);
    printf("------------------------------------------------------\n");
    printf(" LIQUIDO A RECEBER:             R$ %.2f\n", salario_liquido);
    printf("======================================================\n");
}

int main(){
    int op;

    printf("\n============ MENU ============\n");
    printf("Escolha o exercício:\n");
    printf("(1) (2) (3) (5) (6) (9)\n");
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
        case 5:
            ex5();
        break;
        case 9:
            ex9();
        break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
