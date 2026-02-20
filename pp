#include <stdio.h>

float promedio (int n){
    float suma=0;
    int materia;
    for(int i=0; i<n; i++){
    printf ("Ingresa tu %i materia \n", i);
        scanf ("%d", &materia);
        suma += materia;
    }

    return suma;

}

int main(){
    int n=0;
    printf ("Ingresa la cantidad de materias, si quieres salir ingresa 0 \n");
    scanf ("%d",&n);
    if (n !=0 && n>0 && n<10){
       printf ("Tu promedio es %.2f \n", promedio(n)/n );
    } else {
        printf ("No es un numero valido \n");
        return 0;
    }

    return 0;
}
