Algoritmo: Tabla de potencias y direccionamiento de memoria

Escribir "Ingrese el número máximo de bits a evaluar (N, entre 1 y 16):"
Leer maxBits

Si maxBits >= 1 and maxBits <= 16 Entonces
    Para i <- 0 Hasta maxBits Hacer
        direcciones <- 2 ^ i
        Escribir "Bits: ", i, " | Direcciones de memoria: ", direcciones
    FinPara
Sino
    Escribir "Error: N debe estar entre 1 y 16 para evitar desbordamientos."
FinSi

Fin Algoritmo