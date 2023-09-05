#include <stdio.h>
#include <stdlib.h>

void funcao(char *);
int main()
{
    char * texto;

    texto = (char *)malloc(sizeof(char));

    printf("Digite ai: ");
    gets(texto);

    funcao(texto);
    free(texto);

}
void funcao(char* txt){
    printf("%s é o nome", txt);
}
