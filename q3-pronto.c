#include <stdio.h>

/*QUESTÃO 3
TAREFA:
O opressor galático Thanos quer reduzir a população dos seres vivos no universo. Ele consegue
dizimar 1/15 dos seres por dia. Escreva um programa em C que leia o numero de seres do universo
e conte quantos dias ele irá levar para reduzir a população pelo menos à metade( usar uma estrutura
de repetição para contar*/


int main(){
    int dias=0, i=0;
    float seres, metade_seres;

    printf("\nDigite o numero de seres vivos existentes hoje: ");
    scanf("%f", &seres);

    metade_seres=seres/2;

    //APAGAR
    printf("dias: %d\nseres: %.2f\nmetade_seres: %.2f ", dias, seres, metade_seres);

    do{
        dias++;
        seres=(seres-(seres/15));
    }while(seres>metade_seres);



    printf("\n\nResultado: Metade dos seres existentes hoje serao exterminados em %d dias.\n\n", dias);
    return 0;
}