#include <stdio.h>
#include <stdlib.h>

float fahr(float C){
    float res;
    res = 1.8 * C + 32;
    return res;
}
int main()
{
    float C, result;

    printf("Digite o valor em Celsius que deseja converter: ");
    scanf("%f", &C);

    result = fahr(C);
    printf("O resultado em Fahrenheit e: %.2f", result);
}
