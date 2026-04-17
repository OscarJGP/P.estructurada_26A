#include <stdio.h>
void mostrar (int v[], int n){
    int i;
    for (i=0;i<n;i++){
        printf ("%d ", v[i]);
    }
}

int main (){

    int datos [5]= {1,2,3,4,5};
    mostrar(datos,5);
    return 0;
}
#include <stdio.h>

void duplicar (int *x){
    *x = (*x)*2;
}
int main (){
    int n=4;
    duplicar (&n);
    printf ("%d", n);
    return 0;
}
