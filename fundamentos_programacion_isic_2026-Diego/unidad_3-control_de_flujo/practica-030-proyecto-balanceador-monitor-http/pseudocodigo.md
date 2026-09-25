Algoritmo Proyecto: Balanceador de carga y monitor HTTP

Escribir "Ingrese la cantidad de servidores en el clúster (N):"
Leer N
totalMBGlobal <- 0
totalPeticionesGlobal <- 0
Para i <- 1 Hasta N Hacer
cargaServidor <- 0
peticionesServidor <- 0
Escribir "--- Servidor ---"
Escribir "Ingrese el tamaño de la petición en MB (ingrese 0 para pasar al siguiente servidor):"
Leer tamanoPeticion
Mientras cargaServidor < 50
Si (cargaServidor + tamanoPeticion) <= 50 Entonces
cargaServidor <- cargaServidor + tamanoPeticion
peticionesServidor <- peticionesServidor + 1
totalMBGlobal <- totalMBGlobal + tamanoPeticion
totalPeticionesGlobal <- totalPeticionesGlobal + 1
Escribir "Petición aceptada. Carga actual del servidor: ", cargaServidor, " MB"
Sino
Escribir "Petición rechazada: Excede la capacidad máxima de 50 MB del servidor."
FinSi
Escribir "Ingrese otro tamaño de petición (o 0 para terminar este servidor):"
Leer tamanoPeticion
FinMientras
Si peticionesServidor > 0 Entonces
promedioServidor <- cargaServidor / peticionesServidor
Sino
promedioServidor <- 0
FinSi
Escribir "Resumen Servidor: MB consumidos = ", cargaServidor, " | Peticiones atendidas = ", peticionesServidor
Escribir "Promedio de MB por petición en este servidor = ", promedioServidor
FinPara
Escribir "=== REPORTE GLOBAL DEL CLÚSTER ==="
Escribir "Total global de MB procesados: ", totalMBGlobal
Escribir "Total global de peticiones atendidas: ", totalPeticionesGlobal

FinAlgoritmo