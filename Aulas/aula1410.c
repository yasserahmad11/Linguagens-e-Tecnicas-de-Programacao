/*Leia um valor par e mostre sua raiz*/
#include <stdio.h>
#include <math.h>
void enquanto(){
    int valor;
    printf("Digite um valor par: ");
    scanf("%d", &valor);

    while (valor % 2 == 1){
        printf("Valor inválido\nDigite um valor par: ");
        scanf("%d", &valor);
    }
    printf("Raiz de %d = %.2f", valor, sqrt(valor));
}
void dowhile(){
    int valor;
    printf("Digite um valor par: ");
    scanf("%d", &valor);
    do {
        printf("Digite um valor par: ");
        scanf("%d", &valor);

    } while (valor % 2 == 1);

    printf("Raiz de %d = %.2f", valor, sqrt(valor));
}

int main(){
    int op;
    printf("Escolha: \n1 - While\n2 - Do While\nOpção: ");
    scanf("%d", &op);
    switch (op){
        case 1:
            enquanto();
            break;
        case 2:
            dowhile();
            break;
        default:
            printf("Opção inválida");
    }

    return 0;
}

/* int main (){
    int valor[10], i, cont;
    
    for(i=0; i<10; i++){
        scanf("%d", &valor[i]);
    }
    printf("Acabou o for\n");
    i = 0;
    while(i<10){
        scanf("%d", &valor[i]);
        i++;
    }
    printf("Acabou o while\n");
} */