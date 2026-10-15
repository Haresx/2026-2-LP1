#include<stdio.h>
#include "racional.h"

static int es_primo(int n){
    int cantidad_divisores = 0;
    for(int i = 1; i<=n;i++){
        if(n % i==0){
            cantidad_divisores++;
        }
    }
    if(cantidad_divisores==2){
        return 1;
    }else{
        return 0;
    }
}

int mcd(int a, int b){
    
    if (b==0) {
        if(a<0){
            return -a;
        }else{
            return a;
        }
    }
    
    return mcd(b, a % b);
}

void simplificar(int *num, int *den){

    if (es_primo(*num) && es_primo(*den) && *num != *den){
        return;
    }
    
    int comun_divisor = mcd(*num, *den);

    *num = *num / comun_divisor;
    *den = *den / comun_divisor;
}

void sumar(int n1, int d1, int n2, int d2, int *n_res, int *d_res){
    
    *n_res = (n1 * d2) + (n2 * d1);
    *d_res = d1 * d2;
    
    simplificar(n_res, d_res);
}


