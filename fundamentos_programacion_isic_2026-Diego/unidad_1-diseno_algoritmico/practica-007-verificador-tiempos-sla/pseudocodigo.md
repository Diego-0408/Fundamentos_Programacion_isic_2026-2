Algoritmo: Verificador relacional de acuerdos de nivel de servicio (SLA)
Escribir "Cual ah sido el tiempo de respuesta de la API?(En milisegundos)"
Leer tiempoRespuesta

Asignacion - Proceso
SLA_LIMITE <- 200.0
cumpleSLA <- (tiempoRespuesta <= SLA_LIMITE)

Escribir "El tiempo de respuesta fue de: ", tiempoRespuesta, " ms."
Escribir "¿La medicion cumple con el acuerdo de SLA (<= 200 ms)?: ", cumpleSLA
Fin Algoritmo