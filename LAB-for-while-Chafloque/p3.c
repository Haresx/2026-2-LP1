#include<stdio.h>

int main(){

    float n=0;
    scanf("%f",&n);
    float suma = 0;
    for(int i=i;i<n+1;i++){
        int signo = -1;
        for(int j = 0;j<=i;j++){
            signo=signo*signo;
        }
        suma = suma + (float)signo/i;
    }
    printf("La suma es %.6f",suma);


    return 0;
}