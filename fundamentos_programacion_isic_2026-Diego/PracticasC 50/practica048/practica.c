#include <stdio.h>
int main ()
{
    float calificacion;
    int aprobados = 0;
    int reprobados = 0;

    for (int i = 1; i<=10; i++)
    {
        printf("Ingrese la calificacion del alumno %d: ", i);
        scanf("%f", &calificacion);

        if (calificacion >= 7)
        {
            aprobados ++;
        }
        else 
        {
            reprobados ++;
        }
     }

     printf("La cantidad de alumnos aprobados fue de: %d\n",aprobados);
     printf("La cantidad de alumnos reprobados fue de: %d",reprobados);


return 0;
}
