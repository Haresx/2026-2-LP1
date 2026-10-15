#include<stdio.h>
#include "racional.h"

int main (void){
    int n1,d1,n2,d2;
    int n_res;
    int d_res;

    printf("Esta es una calculadora de fracciones\n");
    printf("Ingrese el numerador del primer numero\n");
    scanf("%d",&n1);
    printf("Ingrese el denominador del primer numero\n");
    scanf("%d",&d1);
    printf("Ingrese el numerador del segundo numero\n");
    scanf("%d",&n2);
    printf("Ingrese el denominador del segundo numero\n");
    scanf("%d",&d2);
    sumar(n1,d1,n2,d2,&n_res,&d_res);

    printf("La fraccion resultado es: %d/%d\n",n_res,d_res);

    return 0;
}