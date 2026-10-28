#include <stdio.h>

int main()
{
    char nombre, apellido;
    printf("Ingrese la inicial de su nombre\n");
    scanf(" %c", &nombre);
    printf("Ingrese la inicial de su apellido: \n");
    scanf(" %c", &apellido);
    printf("El codigo es: %c%c", nombre, apellido);

    return 0;
}
