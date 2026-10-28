#include <stdio.h>
#include <string.h>
int main (void)
{
  int horas, horasExtra, horasTotales;
  char preguntaHoras[4];

  printf("Ingrese la cantidad de horas trabajadas: ");
  scanf("%d", &horas);
  printf("Se trabajaron horas extra? ");
  scanf("%s", preguntaHoras);

  if (strcmp(preguntaHoras, "Si") || strcmp(preguntaHoras, "si"))
  {
   printf("Ingrese la cantidad de horas extra: ");
   scanf("%d", &horasExtra);
   
   //Operacion 
   horasTotales = (horas * 100) + (horasExtra * 200);
   
   printf("La cantidad de dinero total por las horas trabajadas es de:%d $", horasTotales);
  }
  
  else
  {
   //Operacion
   horasTotales = horas * 100;
   printf("La cantidad de dinero total por las horas trabajadas es de:%d $", horasTotales);
  }

return 0;
}
