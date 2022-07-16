#include <stdio.h>

/*Escreva um programa em C que leia 10 valores e armazene-os em um vetor, em seguida leia um
número inteiro que represente um índice deste vetor(validando entre 1 e 10 inclusive). Logo após
retirar o elemento desta posição deslocando os demais elementos.Não deve ficar espaço vazio no
vetor.*/

int main(){
    int i=0, x=0, vetor1[10], vetor2[9];

    printf("\nDigite 10 valores para comporem um vetor de 10 posicoes.\n\n");

    for(i=0;i<=9;i++){
        printf("\n Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("\n\nSeu vetor tem os seguintes itens: ");
    for(i=0;i<=9;i++){
        printf("\nMeu vetor[%d]: %d.", i, vetor1[i]);
    }

    printf("\n\nDigite o indice do item que voce deseja retirar do seu vetor: ");
    scanf("%d", &x);

    for(i=0;i!=x;i++){
        vetor2[i]=vetor1[i];
    }
    for(i=x;i<=8;i++){
        vetor2[i]=vetor1[i+1];
    }

    printf("\n\nSeu vetor apos retirar o item escolhido: ");
    for(i=0;i<=8;i++){
        printf("\nMeu vetor[%d]: %d.", i, vetor2[i]);
    }

    printf("\n\nVisulizacao em sequencia simples: ");
    for(i=0;i<=8;i++){
        printf("%d, ",vetor2[i]);
    }
    printf("\n\n");

    return 0;
}