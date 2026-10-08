#include <stdio.h>

int main () {

    int v[5] = {0x00000001,0x00000002,0x00000003,0x00000004,0x00000005};  
    
    for (int i = 0; i < 5; i++) {
        printf("v[%d] =  %d (0x%08X) @ (%p) \n",i, v[i], v[i], (void *)&v[i]);
        unsigned char *p = (unsigned char *)&v[i];
        for(size_t j = 0; j < sizeof(int); j++ ){
            printf("%02x ", *(p + j));
        }
        printf("\n");
    }   
    double d = 3.14;
    printf("double d=%.2f\n", d);
    printf("bytes: ");
    unsigned char *pd = (unsigned char *)&d;
    for (size_t j = 0; j < sizeof(double); j++) {
        printf("%02x ", *(pd + j));
    }
    printf("\n");
    return 0;
}