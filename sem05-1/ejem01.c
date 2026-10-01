#include<stdio.h>

#define ANIO_ACTUAL 2027

#ifndef __linux__
#define __SO__ "Windows"
#else
#define __SO__ "Linux"
#endif

int devolver_anio_actual();
void saludar();

int main (void){

    saludar();
    printf("El sistema operativo actual es %s\n", __SO__);
    return 0;
}


int devolver_anio_actual (){
    return ANIO_ACTUAL;
}

void saludar(){
    printf("Bienvenidos a SW303, en este año %d\n",devolver_anio_actual());
}



