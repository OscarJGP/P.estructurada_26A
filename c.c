#include <stdio.h>


void archivo (int v[3][3],int c){
    FILE *f;
    f = fopen("tablero.txt", "a");    
    fprintf (f,"\n");

    for (int i =0; i<3;i++){
        for (int j=0; j<3;j++){
         fprintf (f,"%5d",v[i][j] );
        }
        fprintf (f,"\n");
    }
    fprintf (f,"Tu arreglo tiene el tamano %d", c );
    fclose (f);
}

int diagonal (int v [3][3]){
    int i= v[0][0]+v[1][1]+v[2][2];
    archivo(v,i);
    return i;
}


void mostrar (int v[3][3]){
    
    for (int i =0; i<3; i++){
        for (int j=0; j<3; j++){
            printf (" %3d", v[i][j]);
        } printf(" \n");
    }      
    printf ("Tu suma de diagonal es %d", diagonal(v));

}
void rellenar (int v[3][3]){
    
    for (int i =0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf (" %d", &v[i][j]);
        }
    }
    mostrar (v);
}


int main (){
int v [3][3];

rellenar (v);

    return 0;
}
