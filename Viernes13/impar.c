
#include <stdio.h>
int numero;

int par(){
    if ((numero%2) !=0){
        printf ("tu numero es impar \n");
    }else {
        printf ("Tu numero no es impar \n");
    }
    return 0;
}

int main (){
    printf ("Ingresa el numero que quieras verificar si es impar \n");
    scanf ("%d", &numero);
    par ();
    return 0;

}
