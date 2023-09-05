#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float delta(float a, float b, float c){
    float d;
    d = pow(b, 2) - 4 * a * c;
    return d;
}
int main()
{
    float a, b, c, x;

    printf("Digite o valor de a:");
    scanf("%f", &a);

    printf("Digite o valor de b:");
    scanf("%f", &b);

    printf("Digite o valor de c:");
    scanf("%f", &c);

    x = delta(a, b, c);
    printf("O delta vale %.2f", x);
}
