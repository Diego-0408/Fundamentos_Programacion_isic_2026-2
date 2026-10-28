#include <stdio.h>

int main ()
{
    float calificaion;
    printf("Ingrese la calificacion (1 a 10): ");
    scanf("%f", &calificaion);

    if (calificaion == 9.0 || calificaion == 10.0)
    {
        printf("Su calificacion fue exelente\n");
    }
    else if (calificaion == 7.0 || calificaion == 8.0)
    {
        printf("Su calificacion fue buena\n");
    }
    else if (calificaion == 6.0)
    {
        printf("Su calificacion fue reprobatoria\n");
    }
    else
    {
        printf("Calificacion invalida\n");
    }
return 0;    
}