#include <stdio.h>
int numero;

int primo(){
    if (numero==2){
                printf ("Tu numero es primo \n");
    }else if ((numero%1) ==0 && (numero%numero) ==0 ){  //no se como hacerlo con ifs//
        printf ("tu numero es primo \n");
    }else {
        printf ("Tu numero NO es primo \n");
    }
    return 0;
}

int main (){
    printf ("Ingresa el numero que quieras verificar si es primo \n");
    scanf ("%d", &numero);
    primo ();
    return 0;

}
