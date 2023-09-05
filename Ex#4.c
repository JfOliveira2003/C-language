#include <stdio.h>
#include <stdlib.h>

int soma(int n1, int n2){
    int s;
    s = n1 + n2;
    return s;
}
int sub(int n1, int n2){
    int d;
    d = n1 + n2;
}
int decid(int n1, int n2, char * decisao){
    if(decisao == "soma"){
        return soma(n1, n2);
    }if(decisao == "sub"){
        return sub(n1, n2);
    }else{
        printf("Você escolheu nada.");
    }   return 0;
}
int main()
{
    
}
