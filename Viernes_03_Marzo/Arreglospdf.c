#include <stdio.h>
#include <string.h>


char nombre [10][20];
int longitud;

void ejemplo1(){
    printf ("Ejemplo 1 \n");
    char nombre[20] = "Carlos"; // Simple uso de imprimir una cadena de caracteres //
    printf("%s \n \n", nombre);
}
void ejemplo2(){
    printf ("Ejemplo 2 \n");

    char nombre[20];         // Ejemplo basico de fgets: fgets(Donde cuanto? donde proviene?) //
    printf ("Ingresa tu nombre usuario \n");
    fgets(nombre, sizeof(nombre), stdin);
    printf ("%s\n", nombre);
}
void ejemplo3(){
    printf ("Ejemplo 3 \n");

    char jugadores[3][20];
    strcpy(jugadores[0], "Ana");
    strcpy(jugadores[1], "Luis");
    strcpy(jugadores[2], "Carlos");
    printf ("%s\n", jugadores[0]);
    printf ("%s\n", jugadores[2]);
    printf ("%s\n \n", jugadores[1]);
}
void ejemplo4 (){
    printf ("Ejemplo 4 \n");

    char jugador[20];
    printf("Nombre del jugador: \n");
    fgets(jugador, sizeof(jugador), stdin);
    printf("Bienvenido %5s \n", jugador);
}
void efegets (int n){
    printf (" \n Ejemplo clase fgets en for \n"); //Este codigo es un ejemplo de como usar fgets para pedir un numero n de usuarios//

        while(getchar() != '\n'); //borrar buffer porque habia error//
        for (int i=0; i < n; i++){           
            printf ("Ingresa tu nombre usuario %i \n", i+1);     
            fgets (nombre [i], sizeof(nombre[i]), stdin);
            printf ("Bienvenido %d %s \n", i+1, nombre [i]);
        }

}
void longitudes(int n){
    printf ("Ejemplo en clase strlen en for \n");
    //este ejemplo lo que hace es que usando strlen imprime la lomgitud de todos las anteriores cadenas usadas//
    for (int i=0 ; i <n ; i++){
        longitud = strlen (nombre [i]);       
        printf ("La longitud de %s es %d \n ", nombre[i], longitud);
    }

}


    int main (){
        ejemplo1();
        ejemplo2();
        ejemplo3();
        ejemplo4();

        int n;
        printf ("Ingresa tu numero de jugadores \n");
        scanf ("%d", &n); //Para hacer variables los siguientes dos ejemplos//

        efegets(n);
        longitudes (n);
        return 0;

    }
