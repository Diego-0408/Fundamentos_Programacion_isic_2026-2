# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Se requiere desarrollar un algoritmo para calcular la superficie externa y el volumen interno de un conducto cilíndrico de protección para cables de fibra óptica. A partir del radio y la longitud del ducto, el sistema debe emplear una constante para el valor de Pi ($\pi = 3.14159265$) para determinar el área de la base, el área lateral y el volumen total.

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `radio` (Real)<br>`longitud` (Real) | `PI_VALOR` = 3.14159265<br>`areaBase` = `PI_VALOR` * (`radio` * `radio`)<br>`areaLateral` = 2 * `PI_VALOR` * `radio` * `longitud`<br>`volumen` = `PI_VALOR` * (`radio` * `radio`) * `longitud` | `areaBase` (Real)<br>`areaLateral` (Real)<br>`volumen` (Real) |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Declarar la constante `PI_VALOR` con el valor de 3.14159265.
3. Declarar las variables de entrada (`radio`, `longitud`) y de salida (`areaBase`, `areaLateral`, `volumen`) como tipo Real.
4. Solicitar y capturar el radio y la longitud del ducto cilíndrico desde el teclado.
5. Calcular el área de la base multiplicando `PI_VALOR` por el radio al cuadrado.
6. Calcular el área lateral exterior multiplicando 2 por `PI_VALOR`, por el radio y por la longitud.
7. Calcular el volumen total multiplicando `PI_VALOR` por el radio al cuadrado y por la longitud.
8. Desplegar los resultados formateados en pantalla (Área de la base, Área lateral y Volumen).
9. Fin del algoritmo.