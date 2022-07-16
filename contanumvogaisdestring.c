#include <stdio.h>
#include <string.h>

/*TAREFA:
Dado um texto inserido pelo teclado, faça uma função que receba esse texto e 
exiba quantas vezes vogais aparecem na string*/

int main(){

    char frase[200];
    int c=0, vogais=0, n=0;

    printf("\n\nEscreva uma frase: ");
    gets(frase);

    //contador de caracteres da frase
    n = strlen(frase);

    for(c=0 ; c<=n ; c++){

        //TESTE DE CADA VOGAL
        if((frase[c] == 'a')){
            vogais = vogais+1;
        }
        if((frase[c] == 'e')){
            vogais = vogais+1;
        }
        if((frase[c] == 'i')){
            vogais = vogais+1;
        }
        if((frase[c] == 'o')){
            vogais = vogais+1;
        }
        if((frase[c] == 'u')){
            vogais = vogais+1;
        }
        if((frase[c] == 'A')){
            vogais = vogais+1;
        }
        if((frase[c] == 'E')){
            vogais = vogais+1;
        }        
        if((frase[c] == 'I')){
            vogais = vogais+1;
        }
        if((frase[c] == 'O')){
            vogais = vogais+1;
        }
        if((frase[c] == 'U')){
            vogais = vogais+1;
        }

    }

    printf("\n\nA frase possui %d vogais. ", vogais);

    return 0;
}
