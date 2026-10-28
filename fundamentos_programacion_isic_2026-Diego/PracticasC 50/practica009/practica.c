#include <stdio.h>
int main() 
{
    float grados;
    grados = 0;
    printf("Ingrese los grados: ");
    scanf("%f", &grados);
    if (grados <= 0 || grados >= 250)
    {
        printf("Los grados ingresados no son válidos.\n");
    }
    else
    {
        printf("Los grados ingresados son válidos.\n");
    }   
}