#include<stdio.h>

int contador1 (){
    static int clave = 0;
    clave++;
    return clave;
}

int contador2 (){
    int clave = 0;
    clave++;
    return clave;
}
int clave3 = 20;
int contador3(){
    clave3++;
    return clave3;
}

int main (){

    int k = contador2();
    printf("Se registra el alumno %d\n",contador2());
    printf("Se registra el alumno %d\n",contador2());
    printf("Se registra el alumno %d\n",contador2());
    printf("Se registra el alumno %d\n",contador2());
    printf("Se registra el alumno %d\n",contador2());
    printf("Contador 3 es %d", contador3());
    return 0;
}