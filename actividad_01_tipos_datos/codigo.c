#include <stdio.h>

int main (){
int a = -9000;
unsigned int ua = 9000;
char b = 'p';
signed char sb = -22;
unsigned char ub = 150;
float c = 2.88;
double d = 90.55;
long e = -100001;
unsigned long ue = 100001;
long long f= -200002;
unsigned long long uf= 200002;
short g = -2;
unsigned short ug = 2;

printf ("La variable a es del tipo int, tiene el valor %d  ", a);
printf ("y la direccion de memoria %d \n", &a);
printf ("La variable ua es del tipo unsigned int, tiene el valor %d  ", ua);
printf ("y la direccion de memoria %d \n", &ua);
printf ("La variable b es del tipo caracter, tiene el valor %c ", b);
printf ("y la direccion de memoria %d  \n", &b);
printf ("La variable sb es del tipo signed caracter, tiene el valor %d ", sb);
printf ("y la direccion de memoria %d  \n", &sb);
printf ("La variable ub es del tipo unsigned caracter, tiene el valor %d ", ub);
printf ("y la direccion de memoria %d  \n", &ub);
printf ("La variable c es del tipo float, tiene el valor %f  ", c);
printf ("y la direccion de memoria %d  \n", &c);
printf ("La variable d es del tipo double, tiene el valor %lf  ", d);
printf ("y la direccion de memoria %d \n", &d);
printf ("La variable e es del tipo long, tiene el valor %ld ", e);
printf ("y la direccion de memoria %d  \n", &e);
printf ("La variable ue es del tipo unsigned long, tiene el valor %ld ", ue);
printf ("y la direccion de memoria %d  \n", &ue);
printf ("La variable f es del tipo long long, tiene el valor %lld  ", f);
printf ("y la direccion de memoria %d  \n", &f);
printf ("La variable uf es del tipo unsigned long long, tiene el valor %lld  ", uf);
printf ("y la direccion de memoria %d  \n", &uf);
printf ("La variable g es del tipo short, tiene el valor %d  ", g);
printf ("y la direccion de memoria %d  \n", &g);
printf ("La variable ug es del tipo unsigned short, tiene el valor %d  ", ug);
printf ("y la direccion de memoria %d  \n", &ug);
 
return 0;

}
