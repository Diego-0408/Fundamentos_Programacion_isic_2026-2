#include <stdio.h>
int main() {
    float calificacion;
    int asistencia;
    int justificate;
    printf("Ingrese la calificacion del estudiante: ");
    scanf("%f", &calificacion);
    printf("Ingrese el porcentaje de asistencia del estudiante: ");
    scanf("%d", &asistencia);
    printf("El estudiante tiene justificacion? (1: Si, 0: No): ");
    scanf("%d", &justificate);

    if (calificacion >= 70 && (asistencia >= 80 || justificate)) {
        printf("El estudiante merece la promocion.");
    } else {
        printf("El estudiante no merece la promocion.");
    }
    return 0;
}