#include<stdio.h>
#define COLUMNAS 4
#define FILAS 5


int main (void){
    float matriz[FILAS][COLUMNAS];
    for(size_t f = 0; f<FILAS;f++){
        for(size_t c = 0;c <COLUMNAS;c++){
            matriz[f][c]=0.0;
        }
    }
    for(size_t f = 0; f<FILAS;f++){
        for(size_t c = 0;c <COLUMNAS;c++){
            printf("\t%1f", matriz[f][c]);
        }
        printf("\n");
    }
    return 0;
}