Algoritmo: Ingesta valida de telemetria

Repetir
    Escribir "Ingrese la lectura de la temperatura"
    leer temperatura

Segun opcion hacer 
    Si temperatura < -50.0 O temperatura > 100.0 Entonces
    Escribir "Error: Lectura invalida fuera de rango. Reintentar."
Fin si
    Hasta Que temperatura >= -50.0 Y temperatura <= 100.0
    Escribir "Lectura confirmada y aceptada por el sistema: ", temperatura
Fin Algoritmo