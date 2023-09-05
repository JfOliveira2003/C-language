#include <stdio.h>
#include <stdlib.h>

void cadastro(char *, int, int, int, float, char);
int main()
{
    char * name;
    int dia, mes, ano;
    float salario;
    char pg;

    name = (char *)malloc(20 * sizeof(char));

    printf("Nome: ");
    gets(name);
    printf("Dia de nascer: ");
    scanf("%d", &dia);
    printf("mes: ");
    scanf("%d", &mes);
    printf("ano: ");
    scanf("%d", &ano);
    printf("quanto ganha? ");
    scanf("%f", &salario);
    printf("Ele e chefe? ");
    scanf("\n");
    pg = getchar();

    cadastro(name, dia, mes, ano, salario, pg);
    free(name);
}
void cadastro(char* nome, int dia, int mes, int ano, float sal, char chefe){
    printf("%s e chefe? %c; Ele nasceu em %d/%d/%d e ganha %.2f R$", nome, chefe, dia, mes, ano, sal);
}
