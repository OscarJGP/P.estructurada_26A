#include <stdio.h>;

int jerarquia(int a, int b, int c){
    a= c + a % b;
    printf("Jerarquia: el resultado de  c + a modulo b es \n %d \n", c);
 return 0;
}
int ternario(int a, int b, int c){
 c = a<b?1:0;
 printf ("Ternario: Si tu numero es 1 implica que a<b, si es 0 su reversa:\n Tu numero es %d \n", c);
 return 0;
}
int logicos (int a, int b, int c){
if (a||b == 10){
printf ("Operadores logicos:\n Alguno de tus numeros o los dos son iguales a 10 \n");
} else {
printf("Operadores logicos: \n Ninguno de tus numero es igual a 10 \n");
}
  return 0;

}
int main (){
int a = 10;
int b = 2;
int c = 1;
jerarquia(a,b,c);
ternario(a,b,c);
 logicos(a,b,c);
 return 0;

}
