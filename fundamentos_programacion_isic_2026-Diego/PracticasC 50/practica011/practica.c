#include <stdio.h>

int main() {
    int calificacion1, calificacion2, calificacion3;
    float promedio;

    printf("Ingrese la primera calificacion: ");
    scanf("%d", &calificacion1);

    printf("Ingrese la segunda calificacion: ");
    scanf("%d", &calificacion2);

    printf("Ingrese la tercera calificacion: ");
    scanf("%d", &calificacion3);

    promedio = (calificacion1 + calificacion2 + calificacion3) / 3.0;

    printf("El promedio semestral es: %.2f\n", promedio);

    return 0;
}