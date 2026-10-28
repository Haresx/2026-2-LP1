#include<stdio.h>

int main (void){
    long long numeros[5]={10,20,30,40,50};
    long long *ptr = numeros;

    for(ptr = numeros;ptr<numeros+5;ptr++){
        printf("valor %lld, direccion %p\n",*ptr,ptr);
    }

    return 0;
}