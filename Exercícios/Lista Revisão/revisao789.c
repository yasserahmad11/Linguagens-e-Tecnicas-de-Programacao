#include <stdio.h>

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

int main(){
    float salario, inss, irpf;
    float valor_hora, horas_trabalhadas, salario_liquido;

    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valor_hora);

    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &horas_trabalhadas);

    salario = calc_salario_bruto(valor_hora, horas_trabalhadas);
    inss = calc_inss(salario);
    irpf = calc_irpf(salario);
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
    return 0;
}
