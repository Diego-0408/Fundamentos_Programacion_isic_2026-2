#include <stdio.h>

int main() {
    float num1, num2, num3, cantidad, promedio;
    num1 = 0;
    num2 = 0;
    num3 = 0;
    cantidad = 3;
    promedio = 0;

    printf("Ingrese el primer numero decimal: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero decimal: ");
    scanf("%f", &num2);
    printf("Ingrese el tercer numero decimal: ");
    scanf("%f", &num3);

    promedio = (num1 + num2 + num3) / cantidad;
    printf("El promedio es: %.2f\n", promedio);

    return 0;
}