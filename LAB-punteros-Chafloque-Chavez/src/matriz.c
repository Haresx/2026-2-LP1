#include<stdio.h>

int main(void){
    int m[3][4];
    int filas[3]={0,0,0};
    int columnas[4]={0,0,0,0};
    int total = 0;
    for(size_t i = 0; i<3; i++){
        for(size_t j = 0; j<4;j++){
            int n;
            printf("Escriba el valor de posicion %zu %zu\n", i, j);
            scanf("%d", &n);
            m[i][j]=n;
            filas[i]=filas[i] + n;
            columnas[j]=columnas[j]+n;
            total = total + n;
        }    
    }
    int k = 0;
    printf("Ingrese el escalar K\n");
    scanf("%d", &k);

    //Matriz original
    printf("Matriz 3x4: \n");
    for(size_t i = 0; i<3; i++){
        for(size_t j = 0; j<4;j++){
            printf("%4d", m[i][j]);
        }
        printf("| suma fila = %d\n",filas[i]);    
    }
    printf("-----------------\n");
    for(size_t i = 0; i<4;i++){
        printf("%4d",columnas[i]);
    }
    printf("  (suma de columnas)\n");

    printf("Suma total: %d\n", total);

    //Matriz transpuesta
    printf("Transpuesta 4x3: \n");
    for(size_t i = 0; i<4; i++){
        for(size_t j = 0; j<3;j++){
            printf("%4d", m[j][i]);
        }
        printf("\n");    
    }
    
    //Matriz por escalar
    printf("Escalar k = %d\n", k);
    for(size_t i = 0; i<3; i++){
        for(size_t j = 0; j<4;j++){
            printf("%4d", k*m[i][j]);
        }
        printf("\n");    
    }

    return 0;
}