# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un servidor procesa un lote de $N$ registros de log de red conteniendo códigos de estado HTTP. Se requiere construir un algoritmo que combine un bucle iterativo para procesar la cantidad exacta de registros especificada y estructuras selectivas anidadas (`Si - Sino`) para clasificar e incrementar contadores independientes según el tipo de respuesta: Éxito (`200`), Error de Cliente (`4xx`) y Error de Servidor (`5xx`).

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `totalRegistros` (Entero)<br>`codigoHTTP` (Entero) repetidamente | `cant200` = 0, `cant4xx` = 0, `cant5xx` = 0<br>**Para** `i` = 1 **Hasta** `totalRegistros` **Hacer**<br>&nbsp;&nbsp;&nbsp;&nbsp;Leer `codigoHTTP`<br>&nbsp;&nbsp;&nbsp;&nbsp;**Si** `codigoHTTP` = 200 **Entonces** `cant200`++<br>&nbsp;&nbsp;&nbsp;&nbsp;**Sino Si** `codigoHTTP` >= 400 **Y** `codigoHTTP` <= 499 **Entonces** `cant4xx`++<br>&nbsp;&nbsp;&nbsp;&nbsp;**Sino Si** `codigoHTTP` >= 500 **Y** `codigoHTTP` <= 599 **Entonces** `cant5xx`++<br>**FinPara** | Resumen estadístico consolidado con los totales acumulados en `cant200`, `cant4xx` y `cant5xx`. |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Inicializar en cero los contadores `cant200`, `cant4xx` y `cant5xx`.
3. Solicitar y capturar la cantidad total de registros a procesar (`totalRegistros`).
4. Iniciar un ciclo iterativo contado que se ejecute desde 1 hasta `totalRegistros`.
5. En cada iteración, solicitar y capturar el valor de `codigoHTTP`.
6. Evaluar mediante condicionales anidadas si el código es igual a 200, si pertenece al rango [400, 499] o si pertenece al rango [500, 599].
7. Incrementar en 1 el contador correspondiente según la evaluación.
8. Al finalizar la totalidad de las iteraciones, desplegar el resumen estadístico con los tres totales acumulados.
9. Fin del algoritmo.