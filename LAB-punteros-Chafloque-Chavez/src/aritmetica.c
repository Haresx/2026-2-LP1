#include <stdio.h>
int main(){
    int v[8]= {10,20,30,40,50,60,70,80};
    int *p=v;
    printf("*p: %d \n", *p);
    printf("*(p + 1): %d \n", *(p + 1));
    printf("*(p + 7): %d \n", *(p + 7));
    printf("p[3]: %d \n", *(p + 3));
    printf("3[p]: %d \n", *(3 + p));
    printf("(p + 5) - p: %d \n", (*(p + 5) - *p)  );
    printf("sizeof(int): %zu \n", sizeof(int));
    printf("Recorrido forward: ");
    int suma=0;
    for(size_t i=0; i<8; i++){
        suma+= *(p + i);
        printf("%d ", *(p + i));
    }

    printf("\nSuma: %d \n", suma);
    printf(" Recorrido reverse: ");
    for(int i=7; i>=0; i--){
        printf("%d ", *(p + i));
    }
    
    return 0;
}