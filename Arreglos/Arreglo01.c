#include <stdio.h>


int main (){
    float float1, float2;
    float temp[23];
    int dummy;
    printf ("Direccion de memoria de dos flotantes \n &temp1 %i \n &temp2 %i \n", &float1, &float2);
    printf ("Direccion de memoria de &float [23] %d\n", &temp[23]);
    printf ("Direccion de memoria de float  %d\n", temp);
    printf ("Direccion de memoria de dummy %d\n", &dummy);

    return 0;
}
