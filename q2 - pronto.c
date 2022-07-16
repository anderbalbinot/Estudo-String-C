#include <stdio.h>
#include <string.h>

/*QUESTÃO 2 
TAREFA:
Esscreva um programa em C que leia uma palavra e diga se é ou não um palíndromo. Um palindromo
é um palavra ou frase que escrita de maneira inversa é igual a original. Ex. radar, ralar, oco,...*/

int main(){
    char palavra_original[100], palavra_invertida[100];
    int i, j, x;

    printf("\n\ndigite uma palavra ou frase: \n");
    gets(&palavra_original);

    int tamanho_palavra=strlen(palavra_original);

    //APAGAR
    printf("\ntamanho_palavra: %d", tamanho_palavra);

    for(i=(tamanho_palavra-1), j=0; j<=(tamanho_palavra-1); j++,i-- ){
        palavra_invertida[i] = palavra_original[j];
    }
    for(i=(tamanho_palavra);i<=99;i++){
        palavra_invertida[i]='\0';
    }

    //apagar
    printf("\n\nA palavra invertida eh\n %s", palavra_invertida);

    x = strcmp(palavra_original,palavra_invertida);

    //RESULTADO:
    if(x==0){
        printf("\n\nA palavra digitada eh um palindromo.");
    }
    if(x!=0){
        printf("\n\nA palavra digitada NAUM eh um palindromo.");
    }

    return 0;
}