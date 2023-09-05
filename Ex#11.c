#include <stdio.h>
#include <stdlib.h>

int vogal(char a){
    int r = 0;
    if(a =='a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a =='A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
        r = 1;
    }return r;
}
int maiuscula(char caracter){
    int r = 0;
    if(caracter >='A' && caracter <= 'Z')
    r = 1;
    return r;
}
int minuscula(char caracter){
    int r = 0;
    if(caracter >= 'a' && caracter <= 'z')
    r = 1;
    return r;
}
int letra(char caracter){
    int r = 0;
    if(minuscula(caracter) || maiuscula(caracter))
    r = 1;
    return r;
}
int consoante(char caracter){
    int r = 0;
    if(vogal(caracter) == 0)
    r = 1;
    return r;
}
int algarismo(int caracter){
    int r = 0;
    if(caracter >= '0' && caracter <= '9')
    r = 1;
    return r;
}
int main()
{
    char algo;

    printf("Digite um caracter: ");
    scanf("%c", &algo);

    if (vogal(algo)){
        printf("\nverdadeiro");
    }else{
        printf("\nNao e vogal");
    }
    if (minuscula(algo)){
        printf("\nverdadeiro");
    }else{
        printf("\nNao e letra minuscula.");
    }if (maiuscula(algo)){
        printf("\nverdadeiro");
    }else{
        printf("\nNao e letra maiuscula");
    }if (letra(algo)){
        printf("\nverdadeiro");
    }else{
        printf("\nNao e letra.");
    }if (consoante(algo)){
        printf("\nverdadeiro");
    }else{
        printf("\nNao e consoante");
    }if (algarismo(algo)){
        printf("\nverdadeiro");
    }else{
        printf("\nNao e algarismo.");
    }
    
    
}