/*TAREFA:
Ex. 1
Crie uma estrutura representando os alunos de um determinado curso.
A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova,
nota da segunda prova e nota da terceira prova.
a) Permita ao usuário entrar com os dados de 5 alunos;
b) Encontre o aluno com a maior nota da primeira prova;
c) Encontre o aluno com a maior média geral;
d) Encontre o aluno com a menor média geral;
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor '6' para aprovação;
*/
//______________________________________________________________________


//INCLUSÃO DAS BIBLIOTECAS
#include <stdio.h> //biblioteca para lidar com as funções 'scanf' e 'printf'
#include <string.h> //biblioteca para lidar com string
#include <stdlib.h> // biblioteca para lidar com função 'fgets'


//definir um 'tipo', um registro de nome 'aluno' (um conjunto de dados que forma um registro)
struct aluno {
    int matricula; //cria o campo 'matrícula'
    char nome_aluno[200]; //cria o campo 'nome' que armazena até 199 caracteres;
    float nota_p[3]; //criação dos campos das 'notas das provas'
    float media;

}; //<---------------Lembrar de colocar um ponto e vírgula  AQUI


//aqui se vai definir a variável propriamente dita
struct aluno a[7]; //cria o vetor 'a' que vai armazenar os dados de cada aluno. Cada aluno pode ser chamado de 'a[0]', 'a[1]', ... 'a[4]'.


int main(){

    //-------------------------------------
    //BLOCO: USUÁRIO VAI INSERIR DADOS

    int i; //variável contadora
    int p; //variável que vai contar cada prova

    printf("\n\nVamos inserir os dados de 3 alunos: \n");

    for(i=0; i<=2; i++){
        printf("\nInsira o nome completo do aluno de numero %d: ", i);
        fgets(a[i].nome_aluno, 200, stdin);
        fflush(stdin);  //comando para resetar a área de transferência do teclado. Para linux usar '__fpurge(stdin)'.
        printf("\nInsira o numero de matricula do aluno de numero %d: ", i);
        scanf("%d", &a[i].matricula);
        fflush(stdin);
        
        //usuário insere a nota de cada prova para cada aluno
        for(p=0; p<=2; p++){
            printf("\nInsira a nota da Prova %d aluno de numero %d: ", p, i);
            scanf("%f", &a[i].nota_p[p]);
            fflush(stdin);
        }
              
    }

    //___________________________________________
    //BLOCO: ENCONTRAR A MAIOR NOTA DA PRIMEIRA PROVA E IMPRIMIR O ALUNO CORRESPONDENTE
    
    char aluno_maior_nota_p0;
    int indicador_duplicacao=0;
    float maior_nota_p0 = a[0].nota_p[0];

    strcpy(aluno_maior_nota_p0,a[0].nome_aluno);
    
    for(i=1; i<=2; i++){
        
        if(maior_nota_p0 == a[i].nota_p[0]){ //se a maior nota da p0 for igual a nota que se está testando
            indicador_duplicacao++;
        }
        
        if(maior_nota_p0 != a[i].nota_p[0]){ //pinça a maior nota da 'p0'
            maior_nota_p0 = a[i].nota_p[0];
        }
    }
    
    //imprime o resultado do bloco
    if(indicador_duplicacao == 0){
        printf("\n\nA maior nota da primeira prova eh %.2f e foi do aluno %s.", maior_nota_p0, aluno_maior_nota_p0);
    }
    if(indicador_duplicacao != 0){
        indicador_duplicacao++;
        printf("\n\nA maior nota da primeira prova eh %f e %d alunos a obtiveram.", maior_nota_p0, indicador_duplicacao);
        
    }


    //______________________________________________
    //BLOCO: Encontrar aluno com maior média geral
    char aluno_maior_media;
    strcpy(aluno_maior_media, a[0].nome_aluno);
    float maior_media = 0;
    
    for(i=0; i<=2; i++){ //vai estabelecer a média de cada aluno
        a[i].media = ((a[i].nota_p[0] + a[i].nota_p[1] + a[i].nota_p[2])/3);
    }

    for(i=0; i<=3; i++){ //vai encontrar o aluno com maior média
        if(a[i].media < a[(i+1)].media){
            strcpy(aluno_maior_media, a[(i+1)].nome_aluno);
        }
        if(a[i].media == a[(i+1)].media){
            indicador_duplicacao++;
        }        
    }

    if(indicador_duplicacao > 0){
        printf("\n\nMais de um estudante obteve a maior media, que foi %.3f", maior_media);
    }
    else{
        printf("\n\nA maior media eh %.3f e foi obtida pelo aluno %s.", maior_media, aluno_maior_media);
    }

    //______________________________________________________________________
    //BLOCO: Encontrar aluno com menor média geral
    char aluno_menor_media;
    strcpy(aluno_menor_media, a[0].nome_aluno);
    float menor_media = 0;
    indicador_duplicacao = 0;
    
    for(i=0; i<=3; i++){ //vai encontrar o aluno com maior média
        if(a[i].media > a[(i+1)].media){
            strcpy(aluno_menor_media, a[(i+1)].nome_aluno);
        }
        if(a[i].media == a[(i+1)].media){
            indicador_duplicacao++;
        }        
    }

    if(indicador_duplicacao > 0){
        printf("\n\nMais de um estudante obteve a menor media que foi %.3f", menor_media);
    }
    else{
        printf("\n\nA menor media eh %.3f e foi obtida pelo aluno %s.", menor_media, aluno_menor_media);
    }

    //______________________________________________________________________________________________________
    //BLOCO: Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor '6' para aprovação;

    for(i=0; i<=2; i=i+1){
        if(a[i].media>=6){
            printf("\nO aluno %s foi APROVADO.", a[i].nome_aluno);
        }
        if(a[i].media<6){
            printf("\nO aluno %s foi REPROVADO.", a[i].nome_aluno);
        }
    }

    //_______________________________________________________

    printf("\n\n\nFIM\n\n\n\n");



    return 0;
}
