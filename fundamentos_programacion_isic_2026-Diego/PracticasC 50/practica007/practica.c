#include <stdio.h>
int main () 
{
    int añoNacimiento, añoActual, edad;
    añoNacimiento = 0;
    añoActual = 0;
    edad = 0;
    printf ("Ingrese el año de nacimiento: ");
    scanf (" %d", &añoNacimiento);
    printf ("Ingrese el año actual: ");
    scanf ("%d", &añoActual);
    edad = añoActual - añoNacimiento;
    printf("Su edad es: %d",edad);
    return 0;
}