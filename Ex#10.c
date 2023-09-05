#include <stdio.h>
#include <stdlib.h>

void soma(float *a, float b, float x, float *y){
    float num;
    float den;
    
    num = (*a * *y) + b * x;
    den = b * *y;

    *a = num;
    *y = den;
}
void sub(float *a, float b, float x, float *y){
    float num;
    float den;

    num = (*a * *y) + b * x;
    den = b * *y;

    *a = num;
    *y = den;
}
void mult(float *a, float b, float x, float *y){
    float num;
    float den;

    num = *a * x;
    den = b * *y;


    *a = num;
    *y = den;
}
void divi(float *a, float b, float x, float *y){
    float num;
    float den;

    num = *a * *y;
    den = b * x;

    *a = num;
    *y = den;
}
int main()
{
    float a, b, x, y, N, D;

   printf("Digite o valor de a: ");
   scanf("%f", &a);

   printf("Digite o valor de b: ");
   scanf("%f", &b);

   printf("Digite o valor de x: ");
   scanf("%f", &x);

   printf("\nDigite o valor de y: ");
   scanf("%f", &y);

   N = a;
   D = y;
   soma(&a, b, x, &y);

   printf("\n%f, %f", a, y);

   a = N;
   y = D;
   sub(&a, b, x, &y);
   printf("\n%f, %f", a, y);

   a = N;
   y = D;

   mult(&a, b, x, &y);
   printf("\n%f, %f", a, y);

   a = N;
   y = D;
   
   divi(&a, b, x, &y);
   printf("\n%f, %f", a, y);

}
