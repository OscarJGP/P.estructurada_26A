#include <stdio.h>
int promedio;
int materias;

int beca (){

 if (promedio >= 85 && materias==0){
        printf ("Felicidades tienes la beca \n");
}else {
    printf ("Alguno de los requisitos es insuficiente \n");
      }
}

int main (){

printf("ingresa tu promedio \n");
    scanf ("%d",  &promedio);
    printf("ingresa tu cantidad de materias reprobadas \n");
    scanf ("%d",  &materias);
    beca ();

return 0;
}
