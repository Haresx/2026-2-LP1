#include<stdio.h>

int main(){
    int desde = 1;
    int hasta = 25;
    for(;;){
        if(desde > hasta){
            break;
        }
        if(desde % 3 == 0){
            printf("%d\n", desde);
        }
        desde++;
    }
    return 0;
}