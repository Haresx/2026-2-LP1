#include<stdio.h>

int ackerman(int m, int n){
    static int contador = 0;
    contador++;
    printf("El contador del Call Stack fueron: %d\n", contador);

    if(m==0){
        return n+1;
    }else if (m>0 && n ==0){
        return ackerman(m-1,1);
    }else if(m>0 && n>0 ){
        return ackerman(m-1, ackerman(m,n-1));
    }


}

int main (void){
    int resultado;
    resultado= ackerman(3,4);

    printf("El resultado de la funcion Ackerman es: %d\n",resultado);
    
    return 0;
}