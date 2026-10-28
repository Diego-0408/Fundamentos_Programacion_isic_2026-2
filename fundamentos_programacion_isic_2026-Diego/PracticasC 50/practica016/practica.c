#include <stdio.h>

int main ()
{  float peso, estatura, imc;
   
  printf("Calculadora de IMC \n");
  printf("Ingrese su peso en kilogramos: ");
  scanf("%f", &peso);
  printf("Ingrese su estatura en metros: ");
  scanf("%f", &estatura);

  //Operacion

  imc = peso / (estatura * estatura);
  
  //Impresion de los resultados

  printf("Su imc calculado es: %.1f ", imc);
  
  return 0;
 }
