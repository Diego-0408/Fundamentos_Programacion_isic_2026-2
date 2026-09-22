Algoritmo: Acumulador de transferencia de archivos
Asignar 
totalDescargado <- 0.0
numArchivos <- 0

Mientras totalDescargado < 100.0
  Escribir "Ingrese el tamaño del alrchivo (MB)"
  leer tamañoArchivo
Asignar
  totaDescargado <- totalDescargado + tamañoArchivo
  numArchivos <- numArchivos + 1
Escribir "Avance actual: ",totalDescargado, "MB"
Fin Mientras

Escribir "Limite de cuota de datos alcanzado. Total final descargado: " , totalDescargado , " MB en " , numArchivos , " archivos procesados."