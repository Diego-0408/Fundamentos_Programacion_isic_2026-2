# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Diseñar un algoritmo de consumo de recursos y transferencia de datos controlado por saldo o capacidad pendiente (streaming). Un cliente FTP descarga un archivo multimedia de tamaño T Megabytes (MB). Los fragmentos de datos llegan con tamaños variables en cada bloque debido a la fluctuación del ancho de banda, evaluando una condición de saldo o remanente hasta completar la descarga total, incluyendo restricciones donde un fragmento excedente ajusta el remanente a cero[cite: 3].

## 2. Tabla Entrada-Proceso-Salida
| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `tamanoTotal` (Real)<br>`tamanoChunk` (Real)[cite: 3] | `remanente <- tamanoTotal`<br>`remanente > 0`<br>`tamanoChunk > remanente` $\rightarrow$ `remanente <- 0`<br>`Sino` $\rightarrow$ `remanente <- remanente - tamanoChunk`[cite: 3] | Reporte de remanente restante por descargar<br>Notificación de descarga finalizada[cite: 3] |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Declarar las variables necesarias (`tamanoTotal`, `tamanoChunk`, `remanente`).
3. Solicitar y capturar las entradas desde el teclado (`tamanoTotal`)[cite: 3].
4. Ejecutar las operaciones aritméticas y/o lógicas correspondientes (bucle `Mientras` y validación de fragmentos para descontar o ajustar a cero)[cite: 3].
5. Desplegar los resultados formateados al usuario (progreso del remanente y mensaje de éxito)[cite: 3].
6. Fin del algoritmo.