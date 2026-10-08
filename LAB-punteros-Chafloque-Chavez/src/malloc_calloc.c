#include <stdio.h>
#include <stdlib.h>
int main(){
    int* valores1 = (int *)malloc(sizeof(int) * 10);
    int* valores2 = (int *)calloc(10, sizeof(int));
    printf("--------- Malloc antes de inicializar: \n");
    for(size_t i=0; i<10; i++){
        printf("En la direccion %p esta el valor %d\n", (valores1 + i), *(valores1 + i));
    }
    printf("--------- Calloc antes de inicializar: \n");
    for(size_t i=0; i<10; i++){
        printf("En la direccion %p esta el valor %d\n", (valores2 + i), *(valores2 + i));
    }


    for(size_t i=0; i<10; i++){
        valores1[i]= (i*i);
        valores2[i]= (i*i);
    }


    printf("--------- Malloc despues de inicializar: \n");
    for(size_t i=0; i<10; i++){
        printf("En la direccion %p esta el valor %d\n", (valores1 + i), *(valores1 + i));
    }
    printf("--------- Malloc despues de inicializar: \n");
    for(size_t i=0; i<10; i++){
        printf("En la direccion %p esta el valor %d\n", (valores2 + i), *(valores2 + i));
    }


    free(valores1);
    free(valores2);
    return 0;
}