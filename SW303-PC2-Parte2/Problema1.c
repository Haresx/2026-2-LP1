#include<stdio.h>

int sumar(int a, int b, long long *resultado){
    if (resultado ==NULL){                  //validamos entradas de direcciones que no sean nulas
        printf("error: puntero nulo\n");
        return 0;
    }
    *resultado = (long long)a + b;          //casteamos a long long como buena practica (el puntero es un puntero de tipo (long long *))
    
    return 1;
}   
int restar(int a, int b, long long *resultado){
    if (resultado ==NULL){
        printf("error: puntero nulo\n");
        return 0;
    }
    *resultado = (long long)a - b;          //same
    
    return 1;
}
int multiplicar(int a, int b, long long *resultado){
    if (resultado == NULL){
        printf("error: puntero nulo\n");
        return 0;
    }
    *resultado = (long long)a * b;          //casteamos a long long para evitar el error con multiplicaciones grandes
    
    return 1;
}
int dividir(int a, int b, long long *cociente, int *resto){
    if (resto == NULL || cociente == NULL){ //validamos entradas para que sean direcciones no nulas
        printf("error: puntero nulo\n");
        return 0;
    }else if(b == 0){                       //validamos para que el valor de b no sea 0
        printf("dividir\t\t -> error: division por cero\n");
        return 0;
    }
    *cociente = (long long)a / b;
    *resto = a - (*cociente) * b;
    
    return 1;
}

int main (void){
    int a;
    int b;
    long long suma, resta, multiplicacion, cociente;
    int resto;
    

    printf("Inserte el primer numero\n");
    scanf("%d",&a);
    printf("Inserte el segundo numero\n");
    scanf("%d",&b);
    printf("a = %d. b = %d\n",a,b);
    if(sumar(a,b,&suma)){                   //como los valores retornados son 0 y 1, se pueden colocar como valores condicionales
        printf("sumar\t\t -> %lld\n",suma);
    }
    if(restar(a,b,&resta)){
        printf("restar\t\t -> %lld\n",resta);
    }
    if(multiplicar(a,b,&multiplicacion)){
        printf("multiplicar\t -> %lld\n",multiplicacion);
    }
    if(dividir(a,b,&cociente, &resto)){
        printf("dividir\t\t -> cociente=%lld, resto=%d\n",cociente, resto);
    }

    printf("Prueba con NULL:\n");
    printf("sumar(1, 2, NULL) -> ");
    sumar(1,2,NULL);

    return 0;
}