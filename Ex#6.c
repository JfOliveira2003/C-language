#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float ang(float grau){
    const float PI = 3.141592;
    return (PI * grau)/180.0;
}
float area(int a, int b, float angulo){
    float result;
    result = ang(angulo);
    return (a * b * sin(result))/2;
}

int main()
{
    float angulo;
    float S;
    int l1, l2;
    float k;

    printf("Digite o valor em graus que deseja converter: ");
    scanf("%f", &angulo);

    S = angulo;

    printf("\nDigite o lado do triangulo: ");
    scanf("%d", &l1);

    printf("\nDigite o lado do triangulo: ");
    scanf("%d", &l2);

    k = area(l1, l2, S);
    printf("O valor da area e: %.2f ", k);

    return 0;
}
