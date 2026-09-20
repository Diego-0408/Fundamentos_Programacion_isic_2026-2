Algoritmo: Monitor de sobrecarga de servidor
Escribir "Servidor Web"
Escribir "Uso CPU"
Leer usoCPU

Asignacion - Proceso 
alertaActivada <- 'FALSO'

Decision 
 Si (usoCPU > 85.0)
 Entonces
  alertaActivada <- 'VERDADERO'
  Escribir "Porcentaje medido: " , usoCPU , "% | Estado de alerta: " , alertaActivada
 Fin de Si

Escribir "Porcentaje medido: ", usoCPU, "% | Estado de alerta: ", alertaActivada
Fin Algoritmo