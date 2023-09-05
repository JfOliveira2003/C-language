#include <stdio.h>
#include <stdlib.h>

float DoisNum(float n1, float n2){
    if(n1 > n2){
        return n1;
    }if(n2 > n1){
        return n2;
    }
    else return 0;
}
float TresNum(float n1, float n2, float n3){
    return DoisNum(DoisNum(n1, n2), n3);
}
int main()
{
   float n1, n2, n3;
   float resp1, resp2;

    printf("Digite um valor: ");
    scanf("%f", &n1);

    printf("Digite um valor: ");
    scanf("\n%f", &n2);
    
    if(n1 == n2){
        printf("Numeros iguais! Reinicie o programa");
    }

    printf("Digite um valor: ");
    scanf("%f", &n3);

    if(DoisNum(n1, n2) == n3){
        printf("Numeros iguais! Reinicie o programa");
    }
    
    resp1 = DoisNum(n1, n2);
    printf("O maior dos dois numeros e : %f", resp1);

    resp2 = TresNum(n1, n2, n3);
    printf("\nO maior dos tres números e : %f", resp2);
}
