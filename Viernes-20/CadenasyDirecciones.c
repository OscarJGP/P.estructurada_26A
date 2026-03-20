#include <stdio.h>
#include <string.h>

char nombres [4][20];


void pedir (){
        printf (" //Funcion para pedir cadenas de caracteres y guardarlas// \n");

    for (int i=0; i < 4; i++){
    fgets (nombres [i], sizeof(nombres [i]), stdin); //Funcion para pedir cadenas de caracteres y guardarlas//
    }
}

void imprimir (){
    printf (" //Funcion para imprimir esas cadenas de caracteres// \n");

     for (int i=0; i < 4; i++){
        printf ("%s", nombres[i]); //Funcion para imprimir esas cadenas de caracteres//
         }
}
void imprimirdir () {
    printf (" //Funcion para imprimir tanto las direcciones de memoria de filas y columnas de una cadena de caracteres // \n");

    for (int i=0; i<4; i++){
        for (int j=0; j < 20; j++){
            printf ("%d \n", &nombres[i][j]);   //Funcion para imprimir tanto las direcciones de memoria de filas y columnas de una cadena de caracteres //
        } 
    }
}

void identificador (){
    printf ("//Funcion de prueba para imprimir la direccion de memoria de arreglos de enteros// \n");

    int Numero [5];
    printf ("%d\n", &Numero[0]);
    printf ("%d\n", &Numero[1]);
    printf ("%d\n", &Numero[2]);       //Funcion de prueba para imprimir la direccion de memoria de un arreglo de enteros//
    printf ("%d\n", &Numero[3]);
    printf ("%d\n", &Numero);
}

void arraycaracter () {
    char arregloc [5];
    printf ("//Funcion de prueba para imprimir la direccion de memoria de arreglos de caracteres// \n");

    printf ("%d\n", &arregloc[0]);
    printf ("%d\n", &arregloc[1]);
    printf ("%d\n", &arregloc[2]);  
    printf ("%d\n", &arregloc[3]);  //Funcion de prueba para imprimir la direccion de memoria de arreglos de caracteres// 
    printf ("%d\n", &arregloc[4]);
    printf ("%d\n", &arregloc[9]);
    printf ("%d\n", &arregloc);
    printf ("%c\n", &arregloc); //basura//
    
}


int main () { 
    pedir ();
    imprimirdir ();
    arraycaracter ();
    identificador();
    imprimir ();  

    return 0;

}
