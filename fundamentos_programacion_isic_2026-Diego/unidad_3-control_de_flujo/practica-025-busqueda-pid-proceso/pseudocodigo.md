Algoritmo Busqueda Secuencial de PID de proceso

Escribir "Ingrese el PID que desea buscar:"
Leer pidBuscado

i <- 1
encontrado <- FALSO

Mientras i <= 10 Y encontrado == FALSO Hacer

Si i == 1 Entonces
pidLeido <- 100
FinSi
Si i == 2 Entonces
pidLeido <- 205
FinSi
Si i == 3 Entonces
pidLeido <- 500
FinSi
Si i == 4 Entonces
pidLeido <- 312
FinSi
Si i == 5 Entonces
pidLeido <- 889
FinSi
Si i == 6 Entonces
pidLeido <- 104
FinSi
Si i == 7 Entonces
pidLeido <- 992
FinSi
Si i == 8 Entonces
pidLeido <- 430
FinSi
Si i == 9 Entonces
pidLeido <- 715
FinSi
Si i == 10 Entonces
pidLeido <- 620
FinSi

Si pidLeido == pidBuscado Entonces
encontrado <- VERDADERO
Sino
i <- i + 1
FinSi

FinMientras

Si encontrado == VERDADERO Entonces
Escribir "¡Proceso encontrado! El PID ", pidBuscado, " está en la posición/intento: ", i
Sino
Escribir "Proceso no encontrado tras escanear los 10 procesos."
FinSi

FinAlgoritmo