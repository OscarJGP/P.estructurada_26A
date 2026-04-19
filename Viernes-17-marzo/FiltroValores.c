#include <stdio.h>
#include <stdlib.h>


void archivo (int v[], int c){
    FILE *f;
    f = fopen ("resultado.txt","w");
    fprintf(f,"Numero de elementos del arreglo filtrado %d \nArreglo:  ", c);
    for (int i=0; i<c;i++){
    fprintf(f,"%d ", v[i]);
    }
    fclose(f);
}


void mostrar2 (int v[], int n){
        printf ("\nTu arreglo mostrando solo numeros IMPARES de %d elementos es: \n", n);
        for (int i =0; i<n; i++){
        printf ("%d ", v[i]);
        }
    }

int filtro (int origen[], int n){
    int destino [6], c=0;
    for (int i=0; i<n; i++){
        if (origen[i] % 2 != 0){
            destino [c] = origen [i];           
            c++;
        }
    }
    mostrar2(destino, c);
    archivo (destino, c);
}


void mostrar (int v[], int n){
        printf ("Tu arreglo de %d elementos es: \n", n);
        for (int i =0; i<n; i++){
        printf ("%d ", v[i]);
        }
        filtro (v, 6);
    }
 

void rellenar (int v[], int n){
    for (int i=0; i<n; i++){
        printf ("ingresa el numero %i, de tu arreglo \n", i+1);
        scanf ("%d", &v[i]);
    }
     mostrar (v, 6);
}


    int main () {
        printf ("Ingresa un arreglo de 6 enteros y filtrare solo los impares \n");
        int v[6];
        rellenar (v, 6);

        return 0;
    }
