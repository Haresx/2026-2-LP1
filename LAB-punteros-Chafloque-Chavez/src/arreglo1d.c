#include <stdio.h>
#define CANT 10

int main(){
    int datos[CANT];
    for(size_t i=0; i<CANT; i++){
        int n;
        printf("Escriba el valor de posicion %zu\n", i);
        scanf("%d", &n);
        datos[i] = n;
    }
    int suma = 0, max, min, par=0, impar=0, indmax, indmin;
    double promedio = 0;
    for(size_t i=0; i<CANT; i++){
        suma+= datos[i];
        if( (datos[i]%2)==0  ){
            par++;
        }
        else {
            impar++;
        }

        if(i==0){
            max = datos[i];
            indmax = i;
            min = datos[i];
            indmin=i;
        }
        if(max < datos[i]){
            max = datos[i];
            indmax = i;
        }
        if(min > datos[i]){
            min = datos[i];
            indmin = i;
        }

    }
    promedio = (float)suma / CANT;

    printf("---Salida---\n");
    printf("Suma: %d\n", suma);
    printf("Promedio: %.2f\n", promedio);
    printf("Minimo: %d (indice %d)\n", min, indmin);
    printf("Maximo: %d (indice %d)\n", max, indmax);
    printf("Pares: %d\n", par);
    printf("Impares: %d\n", impar);
    printf("Original: ");
    for(size_t i=0; i<CANT; i++){
        if(i == (CANT-1)){
            printf("%d", datos[i]);
        }
        else {
            printf("%d, ", datos[i]);
        }
    }
    printf("\n");
    printf("Invertido: ");
    for(size_t i=0; i<(CANT/2) ; i++){
        int aux = datos[i];
        datos[i]=datos[CANT-1-i];
        datos[CANT-1-i] = aux;
    }
    for(size_t i=0; i<CANT; i++){
        if(i == (CANT-1)){
            printf("%d", datos[i]);
        }
        else {
            printf("%d, ", datos[i]);
        }
    }

    return 0;
}