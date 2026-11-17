#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void ex1(){
    int num[10], i, j, aux;

    for (i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%d", &num[i]);
    }
    //Ordem inversa
    printf("\nOrdem Inversa:\n");
    for (i = 10 - 1; i >= 0; i--){
        printf("%d ", num[i]);
    }
    //Ordenação descrescente
    for ( i = 0; i < 10 - 1; i++){
        for (j = 0; j < 10 - 1 - i; j++){
            if (num[j] < num[j + 1]){
                aux = num[j];
                num[j] = num[j + 1];
                num[j + 1] = aux;
            }
        }
    }

    printf("\n\nOrdenados do maior para o menor: \n");
    for (i = 0; i < 10; i++){
        printf("%d ", num[i]);
    }

}
void ex2(){
    double x, a;
    int n = 0;

    do{
        printf("Digite um valor positivo: ");
        scanf("%lf", &x);
    } while (x <= 0);

    a = x;

    while (a >= 10){
        a = a / 10;
        n++;
    }
    while (a < 1){
        a = a * 10;
        n--;
    }

    printf("%.2lf = %.2lf x 10^%d\n", x, a, n);

}
void ex3(){
    int n, i = 0, resto[7];

    do{
        printf("Digite um número (1 a 64): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 64);

    while (n > 0){
        resto[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (i = i - 1; i >= 0; i--){
        printf("%d", resto[i]);
    }

}
void ex4(){
    int valores[10], maior, maior_temp[8], i;

    for (i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);
    }
    for (i = 0; i < 5; i++){
        maior_temp[i] = (valores[2*i] + valores[(2*i)+1] + abs(valores[2*i] - valores[(2*i)+1])) / 2;
    }
    for (i = 0; i < 2; i++){
        maior_temp[i+5] = (maior_temp[2*i] + maior_temp[(2*i)+1] + abs(maior_temp[2*i] - maior_temp[(2*i)+1])) / 2;
    }
    
    maior_temp[7] = (maior_temp[6] + maior_temp[4] + abs(maior_temp[6] - maior_temp[4])) / 2;
    
    maior = (maior_temp[7] + maior_temp[5] + abs(maior_temp[7] - maior_temp[5])) / 2;

    printf("Maior: %d", maior);

}

int main(){
    int op;
    printf("==== MENU ====\n");
    printf("1. Exercício 1\n2. Exercício 2\n3. Exercício 3\n4. Exercício 4\n5. Exercício 5\n6. Exercício 6\n7. Exercício 7\n");
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
            //ex5();
            break;
        case 6:
            //ex6();
            break;
        case 7:
            //ex7();
            break;
        default:
            printf("Opção inválida!\n");
    }
    return 0;
}