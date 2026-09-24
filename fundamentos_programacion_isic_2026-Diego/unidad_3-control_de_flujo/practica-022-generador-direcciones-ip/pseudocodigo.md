Algoritmo: Generador de direcciones IP de subnetting


Escribir "Ingrese el host inicial (1 a 254):"
Leer hostInicial

Escribir "Ingrese el host final (1 a 254):"
Leer hostFinal

Escribir "Direcciones IP asignadas:"

Para octeto <- hostInicial Hasta hostFinal Con Paso 5 Hacer
    Escribir "192.168.1.", octeto
Fin Para

Fin Algoritmo