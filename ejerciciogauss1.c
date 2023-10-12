#include <stdio.h> 
int main(){ 
    int n, suma; 
    printf("Ingrese un numero: "); 
scanf("%i",&n);
suma=(n*(n+1))/2;
printf("La suma de los primeros numeros %i numeros naturales es : %i\n", n, suma );
return 0;
}