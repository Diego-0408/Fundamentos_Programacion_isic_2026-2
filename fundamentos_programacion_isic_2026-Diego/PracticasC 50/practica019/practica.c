#include <stdio.h>

int main ()
{
  float distancia, rendimiento, gas, casetas, costoTotal;

  printf("Calculadora de viaje(Trayecto\n)");
  printf("Ingrese la distancia a recorrer: ");
  scanf("%f", &distancia);
  printf("Ingrese el rendimiento de km por litro de combustible: ");
  scanf("%f", &rendimiento);
  printf("Ingrese el costo por litro de combustible: ");
  scanf("%f", &gas);
  printf("Ingrese el costo total de las casetas: ");
  scanf("%f", &casetas);

  //Operacion

  costoTotal = (distancia / rendimiento) * gas + casetas;

  printf("El costo total de su recorrido es de: %.2f$", costoTotal); 

return 0;
}
