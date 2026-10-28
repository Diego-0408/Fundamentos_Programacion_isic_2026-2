#include <stdio.h>
int main () 
{
    float promedio, asistencia;
    int deportivo;

    printf("Asignacion de becas'\n");
    printf("Ingrese su promedio actual(0 a 100): ");
    scanf("%f", &promedio);
    printf("Ingrese si esta inscrito en un taller deportivo(1 Si, 0 No): ");
    scanf("%d", &deportivo);
    printf("Ingrese su porcentaje de asistencia (0 a 100): ");
    scanf("%f", &asistencia);

    if (promedio >= 90 || promedio <= 100 || deportivo == 1 || asistencia == 90) {
        printf("Eres candidato a recibir beca");
    }
    else {
        printf("No eres candidato");
    }


return 0;
}