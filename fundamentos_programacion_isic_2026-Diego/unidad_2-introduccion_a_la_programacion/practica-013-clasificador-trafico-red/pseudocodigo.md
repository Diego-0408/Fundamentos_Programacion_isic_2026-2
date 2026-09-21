Algoritmo: Clasificador de trafico QoS de Red
// Entrada de datos
    Escribir "Ingrese el numero de puerto de destino (1 a 65535):"
    Leer numeroPuerto

Si numeroPuerto >= 1 Y numeroPuerto <= 1024 Entonces
    Escribir "Prioridad Alta (Servicios del Sistema)"
Sino
    Si numeroPuerto >= 1025 Y numeroPuerto <= 49151 Entonces
    Escribir ""
Sino
    Si numeroPuerto >= 49152 Y numeroPuerto <= 65535 Entonces
     Escribir "Prioridad Baja (Puertos Dinamicos/Privados)"
Sino
    Escribir "Puerto Invalido"
FinSi
FinSi
FinSi
Fin Algoritmo