Algoritmo: Monitor booleano de tolerancia en datacenter
Escribir "Ingrese la temperatura actual"
leer temperatura
Escribir "Ingrese el porcentaje de humedad actual"
leer humedad

Asignacion - Proceso
tempOK <- (temperatura >= 18.0) Y (temperatura <= 24.0)
humedadOK <- (humedad >= 40.0) Y (humedad <= 60.0)
operacionNormativa <- tempOK Y humedadOK
alertaRiesgo <- (temperatura > 24.0) O (humedad > 60.0)

Escribir "ESTADO DE OPERACION: Normativa = ", operacionNormativa, " | Alerta de Riesgo = ", alertaRiesgo
Fin Algoritmo