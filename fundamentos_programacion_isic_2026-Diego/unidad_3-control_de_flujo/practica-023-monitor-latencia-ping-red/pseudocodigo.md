Algoritmo: Monitor de latencia ping de red

sumaLatencias = 0.0
latenciaMaxima = 0.0

Para i <- 1 Hasta 5 Con Paso 1 Hacer
Escribir "Ingrese la latencia de la prueba ", i, " (ms):"
Leer latencia
    
sumaLatencias = sumaLatencias + latencia
    
Si latencia > latenciaMaxima Entonces
latenciaMaxima = latencia
FinSi
FinPara

promedio = sumaLatencias / 5

Escribir "Latencia promedio: ", promedio, " ms"
Escribir "Latencia maxima (peor caso): ", latenciaMaxima, " ms"

Fin Algoritmo