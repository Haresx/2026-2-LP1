#include<stdio.h>

int suma_digitos(int n){
    int temp = 0;
    int suma = 0;
    while (n!=0){
        temp = n%10;
        n=n/10;
        suma=suma+temp;
    }
    return suma;
}

void imprimir_traza(int n){
    if(n>=10){
        printf("%d -> ",n);
    }else{
        printf("%d\n",n);
    }
}

int raiz_digital (int n){
    while(n>=10){
        imprimir_traza(n);
        n=suma_digitos(n);
    }
}
int main (){
    int n = 0;
    scanf("%d",&n);
    n = raiz_digital(n);
    imprimir_traza(n);
    return 0;
}