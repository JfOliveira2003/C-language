#include <stdio.h>
#include <stdlib.h>


double ang(double grau){
    const double PI = 3.14;
    float R;
    R = (PI * grau)/180;
    return R;
}
int main()
{
    double angulo;
    double S;

    printf("Digite o valor em graus que deseja converter: ");
    scanf("%lf", &angulo);

    S = ang(angulo);
    printf("O valor em radianos e %.2lf", S);

    return 0;
}
