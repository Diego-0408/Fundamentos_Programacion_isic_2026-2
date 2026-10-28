# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un curso de arquitectura de computadoras requiere mostrar la capacidad de direccionamiento de memoria de un bus de direcciones desde 0 hasta N bits, expresando la cantidad de combinaciones numéricas posibles ($2^i$). Se solicita el número máximo de bits a evaluar ($N$, entre 1 y 16) utilizando un bucle Para para calcular y validar restricciones contra desbordamientos de datos.

## 2. Tabla Entrada-Proceso-Salida
| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `maxBits` (Entero) | `maxBits >= 1 and maxBits <= 16`<br>`i <- 0 Hasta maxBits`<br>`direcciones <- 2 ^ i`[cite: 5] | Tabla con el número de bits y su equivalente en direcciones direccionables[cite: 5]<br>Mensaje de error en caso de exceder el rango |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Declarar las variables necesarias (`maxBits`, `i`, `direcciones`).
3. Solicitar y capturar las entradas desde el teclado (`maxBits`)[cite: 5].
4. Validar que $N \le 16$ para evitar desbordamientos de datos[cite: 5].
5. Ejecutar el bucle Para desde 0 hasta `maxBits` calculando `direcciones <- 2 ^ i`[cite: 5].
6. Desplegar los resultados formateados al usuario en cada iteración[cite: 5].
7. Fin del algoritmo.