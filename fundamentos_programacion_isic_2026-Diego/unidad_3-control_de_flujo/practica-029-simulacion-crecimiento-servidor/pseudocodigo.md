Algoritmo: Simulacion de crecimiento de carga de servidor

Escribir "Ingrese las peticiones iniciales por minuto (P < 10000):"
Leer peticionesIniciales
Si peticionesIniciales < 10000 Entonces
    cargaActual <- peticionesIniciales
    horas <- 0
    Mientras cargaActual < 10000 Hacer
        cargaActual <- cargaActual * 1.20
        horas <- horas + 1
        Escribir "Hora: ", horas, " | Carga actual: ", cargaActual
    FinMientras
    Escribir "¡Servidor saturado! Total de horas transcurridas: ", horas
Sino
    Escribir "Error: Las peticiones iniciales deben ser estrictamente menores a 10000."
FinSi

Fin Algoritmo