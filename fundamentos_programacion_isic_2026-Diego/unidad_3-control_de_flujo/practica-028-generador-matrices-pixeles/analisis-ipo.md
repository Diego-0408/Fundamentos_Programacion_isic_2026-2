# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un motor gráfico en modo texto necesita generar un marco bidimensional de píxeles (caracteres `*`) de ancho $C$ y alto $F$ para renderizar un mapa en consola. Se solicita el número de filas ($F$) y columnas ($C$) utilizando bucles Para anidados y una estrategia de acumulación de cadenas para simular la impresión sin saltos de línea en entornos como DFD.

## 2. Tabla Entrada-Proceso-Salida
| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `filas` (Entero)<br>`columnas` (Entero)[cite: 5] | `i <- 1 Hasta filas`<br>`renglon <- ""` (inicialización por fila)<br>`j <- 1 Hasta columnas`<br>`renglon <- renglon + "*"`[cite: 5] | Impresión de la matriz de caracteres ASCII en consola fila por fila[cite: 5] |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Declarar las variables necesarias (`filas`, `columnas`, `i`, `j`, `renglon`).
3. Solicitar y capturar las entradas desde el teclado (`filas` y `columnas`)[cite: 5].
4. Ejecutar el bucle Para externo para recorrer cada fila[cite: 5].
5. Inicializar la variable de texto `renglon` vacía al iniciar cada fila.
6. Ejecutar el bucle Para interno para concatenar el carácter `*` según el número de columnas[cite: 5].
7. Desplegar el contenido acumulado del renglón completo en cada iteración externa.
8. Fin del algoritmo.