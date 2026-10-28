#include <stdio.h>
int main() 
{
    float base, altura, area, perimetro;

    printf("Ingrese la base del rectangulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del rectangulo: ");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);

    printf("El area del rectangulo es: %.2f\n", area);
    printf("El perimetro del rectangulo es: %.2f\n", perimetro);
}