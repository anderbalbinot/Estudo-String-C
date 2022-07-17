#include <stdio.h>
#include <string.h>

/*TAREFA:
Dado um texto inserido pelo teclado, faça uma função que receba esse texto e 
exiba quantas vezes cada vogal aparece na string*/

int main(){
    
    char frase[9999]; //variável da frase coletada
    int c1=0, c2=0; //variáveis contadoras
    int n=0, na=0, ne=0, ni=0, no=0, nu=0; //variáveis que guardam o número de caracteres de cada string
    char a[11] = {'a', 'ã', 'á', 'à', 'â', 'A', 'Ã', 'Á', 'À', 'Â', '\0'}, e[7] = {'e', 'é', 'ê', 'E', 'É', 'Ê', '\0'};
    char i[5] = {'i', 'í', 'I', 'Í', '\0'}, o[7] = {'o', 'ó', 'ô', 'O', 'Ó', 'Ô', '\0'}, u[5] = {'u', 'ú', 'U', 'Ú', '\0'};
    int xa = 0, xe = 0, xi = 0, xo = 0, xu = 0; //variáveis que guardam o número de vogais da string


    //coleta a string que será analisada
    printf("\n\nEscreva uma frase: ");
    gets(frase);

    //pega o número de caracteres de cada string e joga em uma variável 'n'
    n = ((strlen(frase))-1);
    na = ((strlen(a))-1);
    ne = ((strlen(e))-1);
    ni = ((strlen(i))-1);
    no = ((strlen(o))-1);
    nu = ((strlen(u))-1);


    //faz a varedura para contar as vogais na string
    for(c1=0 ; c1<=n ; c1++){
        for(c2=0; c2<=na; c2++){
            if(frase[c1] == a[c2]){
                xa = xa++; //conta quantos 'a' tem na string
            }
            
        }
        for(c2=0; c2<=ne; c2++){
            if(frase[c1] == e[c2]){
                xe = xe++; //conta quantos 'a' tem na string
            }
            
        }
        for(c2=0; c2<=ni; c2++){
            if(frase[c1] == i[c2]){
                xi = xi++; //conta quantos 'a' tem na string
            }
            
        }
        for(c2=0; c2<=no; c2++){
            if(frase[c1] == o[c2]){
                xo = xo++; //conta quantos 'a' tem na string
            }
            
        }
        for(c2=0; c2<=nu; c2++){
            if(frase[c1] == u[c2]){
                xu = xu++; //conta quantos 'a' tem na string
            }
            
        }
    }

    printf("\n\nRESULTADO:");
    printf("\n- O Caracter 'a' se repete %d vezes na string;", xa);
    printf("\n- O Caracter 'e' se repete %d vezes na string;", xe);
    printf("\n- O Caracter 'i' se repete %d vezes na string;", xi);
    printf("\n- O Caracter 'o' se repete %d vezes na string;", xo);
    printf("\n- O Caracter 'u' se repete %d vezes na string;\n\n", xu);

    return 0;
}
