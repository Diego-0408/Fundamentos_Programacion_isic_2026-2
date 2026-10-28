#include <stdio.h>

int main ()
{
  float precio, precioDescuento;
  
  printf("Ingrese el precio: ");
  scanf("%f", &precio);

  //Operacion

  precioDescuento = precio * (1-0.20)*(1-0.10);
  printf("El precio con el descuento doble es de: %.2f$",precioDescuento);
  
  return 0;
}
