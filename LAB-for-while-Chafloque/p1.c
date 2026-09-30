#include<stdio.h>


int main (){
    int n = 0;
    scanf("%d",&n);
    while (n>=10){
        printf("%d -> ",n);
        int temp = 0;
        int suma = 0;
        while (n!=0){
            temp = n%10;
            n=n/10;
            suma=suma+temp;
        }
        n=suma;
    }
    printf("%d\n",n);
    return 0;
}