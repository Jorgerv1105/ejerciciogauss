#include <stdio.h> 
int main(void) { 
    int n, suma; 
    printf("Ingrese un numero natural: \n"); 
    scanf("%i", &n);
    if (n<=0){
    while(n<=0)
    {
        printf("El numero ingresado no es un entero positivo vuelva a intentarlo\n")
        scanf("%i", &n);

    }
    }
    else
    suma=(n*(n+1))/2;
    printf("La suma de los primeros numeros %i numeros naturales es : %i\n", n, suma );
return 0;
}