#include <stdio.h>
#include <string.h>

/*QUESTÃO 1 
TAREFA:
Escreva um programa em C que leia uma frase e um caracter. Conte e escreva quantas vezez este
caracter aparece na frase*/

int main(){
    int i, num_vezes=0, x;
    char caracter, frase[100];

    // entrada da frase e caracter
    printf("\n\nDigite uma frase: ");
    gets(frase);
    printf("\nDigite um caracter: ");
    scanf("%c", &caracter);

    //verificação se houve armazenamento correto na variável
    printf("\n\nFrase: %s",frase);
    printf("\nCaracter: %c\n\n",caracter);

        //contar quantos caracteres tem a frase:
    printf("\n\nA frase possui %d letras", strlen(frase));

    //atribui o número de caracteres da frase a uma variável contadora 'i'
    x=strlen(frase);

    printf("\n\nx: %d \n\n", x);

    //laço
    for(i=0;i!=x;i++){
        if(frase[i] == caracter){
            num_vezes++;
        }
    }

    //RESULTADO
    printf("\n\nRESULTADO: A frase '%s' contem %d vezes o caracter '%c'.", frase, num_vezes, caracter);

    return 0;
    
}
