#include <stdio.h>
#include <string.h>

/* TAREFA:
Escreva um programa que leia um texto pelo teclado. Em seguida, faça uma função que inverta e exiba-o na tela.
Exemplo: Para a string "Bom dia" o programa imprime "aid moB"
- o objetivo é alterar os caracteres na string, não é imprimir ao contrário*/

int main(){

    //declara a string
    char frase[100], invertida[100];
    int n=0; //tamanho da string
    int a=0, b=0; //cada uma das letras da string

    //usuário escreve a string:
    printf("\n\nDigite uma frase: ");
    gets(&frase);

    //contar o número de caracteres de uma string, com exceção o caracter '\0' (caractere de fim de string)
    n = strlen(frase); // 'n vai ser o número de caracteres da frase'

    //inverter caracteres
    for(a=0, b=(n-1) ; a<=(n-1) ; a++, b--){ //se subtrai um valor do numero de caracteres pq não se conta o caracter de fim de string. 
        invertida[a] = frase[b];
    }
    for(n;n<=99;n++){
        invertida[a]='\0'; //coloca o caracter de fim de string nas posições sem letras
        // da string para que o programa entenda que a frase acaba ali
    }

    //imprime a palavra invertida
    printf("\n\nA palavra invertida eh\n %s\n\n", invertida);

    return 0;
}
