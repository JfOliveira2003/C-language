#include <stdio.h>
#include <stdlib.h>

float absoluto(int n1){
    if(n1 < 0)
    return -n1;
    return n1;
}
int main()
{
    float n1, res;

    printf("Digite um valor: ");
    scanf("%f", &n1);

    res = absoluto(n1);
    printf("%.2f", res);
}
