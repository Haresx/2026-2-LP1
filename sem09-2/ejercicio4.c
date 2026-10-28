#include<stdio.h>

int main (void){
    long long numeros[5]={10,20,30,40,50};
    char *ptr;
    ptr = (char *)numeros;
    for(int i =0;i<5;i++){
        printf("valor %d, direccion %p\n",*(ptr+8*i),(ptr+8*i));
    }

    return 0;
}