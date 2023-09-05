#include <stdio.h>
#include <stdlib.h>

void funcao(char *, char *);
int main(){
    char * nome;
    char * sobrenome;

    nome = (char *)malloc(sizeof(char));
    sobrenome = (char *)malloc(sizeof(char));

    printf("Escreva seu nome: ");
    gets(nome);

    printf("Sobrenome: ");
    gets(sobrenome);
    
    funcao(nome, sobrenome);
    free(nome);
    free(sobrenome);
}
void funcao(char* nome, char* snome){
    printf("%s, %s", snome, nome);
}