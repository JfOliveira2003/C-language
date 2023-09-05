#include <stdio.h>
#include <stdlib.h>

int divi(int n1, int n2){
    if(n1 % n2 == 0)
        return 1;
    return 0;
}

int main()
{
    int n1, n2;

    printf("Digite um valor: ");
    scanf("%d", &n1);
    printf("\n%s", divi(n1, 2) ? "Par" : "Impar");

    printf("Digite um valor: ");
    scanf("\n%d", &n2);
    printf("%s", divi(n2, 2) ? "Par" : "Impar");

    if(divi(n1, n2)){
        printf("\nO primeiro numero e divisivel pelo segundo");
    }else{
        printf("nao e divisivel");
    }

}