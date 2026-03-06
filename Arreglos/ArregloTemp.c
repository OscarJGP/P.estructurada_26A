#include <stdio.h>

void inicializacion (float temp[4], int n){
    for (int i; i<n; i++){
        printf ("Ingresa tu %i temperatura \n", i+1);
        scanf ("%f", &temp[i]);
    }

}

void imprime (float temp[4], int n){
    for (int i=0; i<n; i++){
        printf ("A la hora %i tu temperatura fue de %.2f \n", i+1, temp[i]);
    }
}
int main (){
    int n=0;
    printf ("Ingresa las temperaturas que quieras capturar \n");
    scanf ("%d", &n);
    float temp [4];
    inicializacion (temp, n);
    imprime (temp, n);
    return 0;
}
