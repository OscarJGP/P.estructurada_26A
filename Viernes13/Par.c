#include <stdio.h>
int numero;

int par(){
    if ((numero%2)==0){
        printf ("tu numero es par \n");
    }else {
        printf ("Tu numero no es par \n");
    }
    return 0;
}

int main (){
    printf ("Ingresa el numero que quieras verificar si es par \n");
    scanf ("%d", &numero);
    par ();
    return 0;

}
