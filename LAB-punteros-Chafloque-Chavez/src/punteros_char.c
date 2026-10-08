#include<stdio.h>

int main (void){
    char *s = "Hola, mundo";
    int i = 0;
    while(s[i]!='\0'){
        putchar(s[i]);
        i++;
    }
    printf("\nCantidad de caracteres es %d\n",i);
    //s[0]='h';
    char s2[] = "Hola, mundo";
    int j = 0;
    while(s2[j]!='\0'){
        putchar(s2[j]);
        j++;
    }
    printf("\n");
    s2[0]='h';
    printf("Verificamos el cambio de s2[0] a 'h'\n");
    int k = 0;
    while(s2[k]!='\0'){
        putchar(s2[k]);
        k++;
    }
    printf("\n");

    return 0;
}