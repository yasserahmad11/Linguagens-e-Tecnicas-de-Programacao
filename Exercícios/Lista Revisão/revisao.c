#include <stdio.h>

int multDigito(int dig, int valor){
    return dig * valor;
}

int main(){
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
        printf("O CPF é válido!");
    }
    else{
        printf("O CPF é inválido!");
    }

    return 0;
}
