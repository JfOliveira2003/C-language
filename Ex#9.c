#include <stdio.h>
#include <stdlib.h>

void PM(float xi, float yi, float *xf , float *yf){
    float xm, ym;
    xm = (xi + *xf)/2;
    ym = (yi + *yf)/2;

    *xf = xm;
    *yf = ym;

    
}
int main()
{
   float xi, yi, xf, yf;

   printf("Digite o valor de xi: ");
   scanf("%f", &xi);

   printf("Digite o valor de yi: ");
   scanf("%f", &yi);

   printf("Digite o valor de xf: ");
   scanf("%f", &xf);

   printf("Digite o valor de yf: ");
   scanf("%f", &yf);

    PM(xi, yi, &xf, &yf);
    
    printf("%.2f, %.2f", xf, yf);
}
