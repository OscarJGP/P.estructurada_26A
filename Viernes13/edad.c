#include <stdio.h>


int main (){

int edad;
    printf("ingresa tu edad \n");
    scanf ("%d",  &edad);

    if (edad >= 18){
        printf ("Felicidades eres mayor de edad \n");
}else {
    printf ("No eres mayor de edad \n");
}
return 0;
}
