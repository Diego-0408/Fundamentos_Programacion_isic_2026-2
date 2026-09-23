Algoritmo: Analizador de logs de sistema
Escribir "Ingrese el total de registros a procesar:"
Leer totaRegistros

Asignar 
cant200 <- 0
cant4xx <- 0
cant5xx <- 0

para i <- 1 hasta totalRegistros con paso 1 Hacer 
    Escribir "Ingrese el codigo HTTP del registro ",i
    Leer codigoHTTP

Si codigoHTTP = 200Entonces
    cant200 <- cant200 + 1
Sino
  Si codigoHTTP >= 400 y codigoHTTP <= 499 Entonces
    cant4xx <- cant4xx + 1
  Sino
    Si codigo HTTP >= 500 Y codigoHTTP <= 599 Entonces
      cant5xx <- cant5xx + 1
    Fin si
  Fin si
Fin si
Fin para
Escribir "Resumen estadistico de logs:"
    Escribir "Exitos (200): ", cant200
    Escribir "Errores de cliente (4xx): ", cant4xx
    Escribir "Errores de servidor (5xx): ", cant5xx
Fin Algoritmo