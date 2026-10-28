#include <stdio.h>
int main() {
    float peso;
    printf("Ingrese su peso en kg: ");
    scanf("%f", &peso);

    if (peso > 90.7)
    {
        printf("Su categoria de peso es Peso Pesado\n");
    }
    else if (peso > 81.6 && peso <= 90.7)
    {
        printf("Su categoria de peso es Peso Semipesado\n");
    }
    else if (peso > 75.3 && peso <= 81.6)
    {
        printf("Su categoria de peso es Peso Mediano\n");
    }
    else if (peso > 70.3 && peso <= 75.3)
    {
        printf("Su categoria de peso es Peso Welter\n");
    }
    else if (peso > 66.7 && peso <= 70.3)
    {
        printf("Su categoria de peso es Peso Ligero\n");
    }
    else if (peso > 61.2 && peso <= 66.7)
    {
        printf("Su categoria de peso es Peso Pluma\n");
    }
    else if (peso > 57.2 && peso <= 61.2)
    {
        printf("Su categoria de peso es Peso Gallo\n");
    }
    else if (peso > 52.2 && peso <= 57.2)
    {
        printf("Su categoria de peso es Peso Mosca\n");
    }
    else
    {
        printf("Peso invalido\n");
    }

    return 0;
}