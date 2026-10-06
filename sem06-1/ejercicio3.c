#include <stdio.h>

int main () {

    int *ptr;    
    int cantidad = 200;
            
    ptr = NULL; 

    if( ptr == NULL){
        ptr = &cantidad;

        printf("Puntero inicializado, su direccion es %p y su valor es %d\n", ptr, *ptr);
    } else {
        printf("El puntero ya tiene memoria, no es necesario inicializar!\n");
    }
    return 0;
}