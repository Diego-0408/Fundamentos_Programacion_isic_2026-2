Algoritmo Generador de matrices de pixeles ASCII

Escribir "Ingrese el número de filas (F):"
Leer filas
Escribir "Ingrese el número de columnas (C):"
Leer columnas

Para i <- 1 Hasta filas Hacer
    renglon <- ""
    Para j <- 1 Hasta columnas Hacer
        renglon <- renglon + "*"
    FinPara
    Escribir renglon
FinPara

FinAlgoritmo