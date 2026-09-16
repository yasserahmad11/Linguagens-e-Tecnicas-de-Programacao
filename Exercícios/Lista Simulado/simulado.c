#include <stdio.h>
float calc_vpa (float valorEmpresa, float quantidadeAcoes){
    return valorEmpresa / quantidadeAcoes;
}
float calc_pvp (float precoAcao, float vpa){
    return precoAcao / vpa;
}
void classificacao(float pvp){
    if (pvp < 0.0){
        printf("Classificação: PÉSSIMA");
    }
    else if (pvp < 0.8){
        printf("Classificação: ÓTIMA");
    }
    else if (pvp < 1.2){
        printf("Classificação: INDIFERENTE");
    }
    else if (pvp <= 2.0){
        printf("Classificação: BOA");
    }
    else{
        printf("Classificação: RUIM");
    }
}
void ex1(){
    int a, b, c, d, aux;

    printf("Digite 4 números: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    aux = a;
    a = c;
    c = d;
    d = b;
    b = aux;

    printf("%d %d %d %d", a, b, c, d);
}
void ex2(){
    float valorEmpresa, quantidadeAcoes, precoAcao, vpa, pvp;

    printf("Digite o valor patrimonial da empresa: R$ ");
    scanf("%f", &valorEmpresa);
    printf("Digite a quantidade de ações disponíveis: ");
    scanf("%f", &quantidadeAcoes);
    printf("Digite o preço atual de cada ação: R$ ");
    scanf("%f", &precoAcao);

    vpa = calc_vpa(valorEmpresa, quantidadeAcoes);
    pvp = calc_pvp(precoAcao, vpa);

    classificacao(pvp);
}

int main(){
    int op;
    printf("==== MENU ====\n");
    printf("(1)        (2)\n");
    printf("Escolha: ");
    scanf("%d", &op);

    switch(op){
        case 1:
            ex1();
        break;
        case 2:
            ex2();
        break;
        default:
            printf("Opção inválida.");
    }
}
