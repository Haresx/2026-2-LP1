#include<stdio.h>

int main(void){
    int x = 42;
    int *p = &x;
    int **pp=&p;
    
    printf("Valores de x = %d, *p = %d y **pp = %d\n", x, *p,**pp);
    printf("Direccion de x = %p, valor de p = %p y direccion de p = %p\n", &x, p, &p);
    printf("La direccion de pp es %p\n",&pp);

    *p=100;
    printf("Modificar el valor de x desde *p = %d -> x = %d\n", *p, x);
    **pp=200;
    printf("Modificar el valor de x desde **pp = %d -> x = %d\n", **pp, x);

    printf("Imprimimos las direciones de x: %p, de x con *p: %p y de *p con **pp: %p,\n",(void *)p, (void *)*pp, (void *)pp);


    return 0;
}