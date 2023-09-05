#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int triangulo(float n1, float n2, float n3){
    if(n1 < n2 + n3 && n2 < n3 + n1 && n3 < n1 + n2){
        return 1;
    }else{
        return 0;
    }
}
int TipoTriangulo(float n1, float n2, float n3){
    if(n1 != n2 && n2 != n3 && n3 != n1){
        return 1;
    }if(n1 == n2 && n1 != n3 || n2 == n3 && n2 != n1 || n3 == n1 && n3 != n2){
        return 2;
    }if(n1 == n2 && n2 == n3){
        return 3;
    }if(triangulo(n1, n2, n3) == 0){
        return 0;
    }
}
int main()
{

    float n1, n2, n3;
    int resp;

    printf("Digite um valor: ");
    scanf("%f", &n1);

    printf("Digite um valor: ");
    scanf("\n%f", &n2);

    printf("Digite um valor: ");
    scanf("\n%f", &n3);

    if(triangulo(n1, n2, n3) == 1){
        printf("E um triangulo");
        resp = TipoTriangulo(n1, n2, n3);

    }
    switch (resp)
    {
        case 1:
            printf("Escaleno");
            break;
        case 2:
            printf("Isoceles");
            break;
        case 3:
            printf("Equilatero");
            break;
        default:
            printf("nao e triangulo");
            break;
    }
}