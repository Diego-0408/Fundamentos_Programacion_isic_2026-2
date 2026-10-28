#include <stdio.h>
int main () 
{
    float peso, dollar, conversion;
    peso = 0;
    dollar = 0;
    conversion = 0;

    printf ("Ingrese el valor del dolar actualmente: ");
    scanf ("%f", &dollar);
    printf ("Ingrese la cantidad de pesos a convertir: ");
    scanf ("%f", &peso);
    conversion = peso / dollar;
    printf("El resultado de su conversion es: %.2f",conversion);
    return 0;
}