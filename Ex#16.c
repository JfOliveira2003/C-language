#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int imc(float altura, float peso){
    float result;
    result = peso/(altura * altura);
    if(result < 25) return 0;
    if(result >= 25 && result < 30) return 1;
    if(30 <= result && result < 35) return 2;
    if(35 <= result && result < 40) return 3;
    if(result >= 40) return 4;
}
int main()
{
    float altura, peso;

    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("\n%f", &altura);

    int class = imc(altura, peso);
    switch (class)
    {
        case 0:
            printf("Ausência de obesidade");
            break;
        case 1:
            printf("sobrepeso");
            break;
        case 2:
            printf("obesidade grau 1");
            break;
        case 3:
            printf("obesidade grau 2");
            break;
        case 4:
            printf("Obesidade morbida");
            break;
        default:
            ("none");
            break;
    }
}
