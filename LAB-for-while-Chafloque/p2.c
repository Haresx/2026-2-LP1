#include<stdio.h>

int main (){
    int mayorSemilla = 0;
    int mayorN = 0;
    for(int i = 1; i<10000;i++){
        int semillaActual = 0;
        int n= i;
        while(n!=1){
            if(n%2==0){
                n=n/2;
            }else{
                n=3*n+1;
            }
            semillaActual++;
        }
        
        if (semillaActual>mayorSemilla){
            mayorSemilla=semillaActual;
            mayorN=i;
        }
        semillaActual=0;
    }
    printf("Mayor semilla en [1, 10000]: n = %d, semilla = %d\n", mayorN,mayorSemilla);
}