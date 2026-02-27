#include <stdio.h>

void par (){
    int n;
    printf ("Dame el numero entero que verificar \n");
    scanf ("%i", &n);
    if (n%2 == 0){
        printf ("Tu numero es par \n");               //Funcion para que si tu numero es par y asi pues//
    } else {
        printf ("Tu numero es impar \n");
    }
}

void calculadora (){
    int n, a, b, r;
    do {
        printf ("ingresa dos numeros \n");
        scanf ("%d %d", &a, &b);
        printf ("Que quieres hacer 1 para sumar, 2 restar, 3 salir \n");
        scanf ("%d", &n);
        switch (n)
        {
        case 1:
        r=a+b;
        printf ("%d\n", r);
         break;                     //Calculadoea usando do while y switch//
        case 2:
        r=a-b;
        printf ("%d\n", r);
         break;
        default:
        printf ("Ocurrio un error \n");
            break;
        }

    } while (n!=3);
}
int menu (){
     char n;
    do {
        printf ("Que quieres hacer a para par, b para calculadora, c para salir \n");
        scanf ("%c", &n);
        switch (n)
        {
        case 'a':
        par ();
        break;
        case 'b':
        calculadora ();
        break;
        case 'c':
        return 0;
        default:        
        printf ("Opcion incorrecta \n");
        break;
        }
    } while (n!=0);
    return 0;
}

int main (){
    menu ();
    return 0;
}
