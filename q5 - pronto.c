#include <stdio.h>

/*
Para a matriz M(5 X 5) declarada abaixo:
{0, 1, 1, 0, 0}
{0, 0, 0, 1, 0}
{1, 1, 0, 1, 0}
{0, 1, 0, 0, 0}
{1, 1, 0, 0, 0}
Suponto que a matriz represente um campo minado, onde “1“ represente uma mina e “0“
represente campo limpo. Escreva um algoritmo que leia a matriz e um conjunto de dez pares de
valores(l , c) que representem os índices da matriz. Conte quantas minas foram descobretas e
mostre este resultado.*/

int main(){
    int M[5][5] = {{0,1,1,0,0},{0,0,0,1,0},{1,1,0,1,0},{0,1,0,0,0},{1,1,0,0,0}};
    int usuario[5][5] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
    int l, c, minas_descobertas=0;
    int i;

    printf("Voce tem 10 chances de acertar onde estao localizadas minas em um campo minado (matriz) de 5 por 5.\n");
    printf("Digite apenas numeros de 1 a 5.\n\n");
    for(i=1;i<=10;i++){
        printf("\n\n%da Mina: Digite a linha da mina: ", i);
        scanf("%d", &l);
        printf("%da Mina: Digite a coluna da mina: ", i);
        scanf("%d", &c);
        printf("- Primeiro Par: (%d, %d).", l, c);
        usuario[l-1][c-1] = 1;
        if(usuario[l-1][c-1] == M[l-1][c-1]){
            minas_descobertas++;
        }
    }

    if(minas_descobertas>=1){
        printf("\n\nParabens, Voce acertou a localizacao de %d minas.", minas_descobertas);
    }
    if(minas_descobertas==0){
        printf("\n\nQue pena, Voce naum acertou a localizacao de nenhuma mina.");
    }
    
    return 0;

}

