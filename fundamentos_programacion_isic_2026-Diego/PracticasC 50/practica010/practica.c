#include <stdio.h>
#include <string.h>
int main() 
{
    char nombre [50]; 
    int edad; 
    float estatura; 

    printf("Ingresa su nombre completo:\n");
    scanf("%s", &nombre);
    printf("Ingrese su edad:\n");
    scanf("%d", &edad);
    printf("Ingrese su estatura en metros:\n");
    scanf("%f", &estatura);
    printf("Sus datos son: \n%s\n %d\n %.2f\n ", nombre,edad,estatura);
    return 0;
}