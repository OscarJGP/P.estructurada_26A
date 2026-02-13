#include <stdio.h>
int promedio;
int materias;
int edad;

int mayor(){
    if (edad >= 18){
        printf ("Felicidades eres mayor de edad \n");
}else {
    printf ("No eres mayor de edad \n");
    return -1;
}
return 0;
}

int reinscribirse(){
    if (materias==2 || materias ==3){
        printf("No puedes reinscribirte \n");
    } else if (materias >3) {
        printf("No puedes reinscribirte y estas en situacion critica \n");
    } else {
        printf ("Puedes inscribirte \n");
    }
return 0;
}

int beca (){

 if (promedio >= 85 && materias==0){
        printf ("Felicidades tienes la beca \n");
}else {
    printf ("Alguno de los requisitos es insuficiente \n");
      }
}

int main (){
    printf("ingresa tu edad \n");
    scanf ("%d",  &edad);
   
    if (mayor ()==0){
    printf("ingresa tu promedio \n");
    scanf ("%d",  &promedio);
    printf("ingresa tu cantidad de materias reprobadas \n");
    scanf ("%d",  &materias);
    beca ();
    reinscribirse();
    } else {
        printf ("No puedes seguir por tuedad \n");
    }

return 0;
}
