#include <stdio.h>
#define CONVERGENCIA 0.693147

int main () {
    float suma=0.0;
    int n=1;
    float fraccion;
    int iteracion=0;
    printf("Tolerancia: 1e-6\n");
    
    do {
        fraccion=1.0/n;
        if (n%2==0) {
            suma=suma-fraccion;
        } else {
            suma=suma+fraccion;
        }
        n++;
        iteracion++;
    } while (fraccion > 1e-6);
    
    printf("Iteraciones: %d\n",iteracion);
    printf("Suma calculada: %f\n",suma);
    printf("ln(2) esperado: %f\n", CONVERGENCIA);
    
    float error = CONVERGENCIA - suma;
    if (error < 0.0) {
        error = error * 1.0;
    }
    
    printf("Error Absoluto: %f\n",error);
    return 0;
}