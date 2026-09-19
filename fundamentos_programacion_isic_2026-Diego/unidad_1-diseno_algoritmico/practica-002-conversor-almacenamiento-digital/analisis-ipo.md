# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
El problema a resolver es la conversion de gigabytes a otras capacidades de almacenamineto para facilitar el trabajo en el centro de computo, el resultado esperado es la conversion limpia y ordenada de la entrada de gb a megabytes(MG), terabytes (TB) y kilobytes (KB).

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `capacidadGB` (Real) | `capacidadMB` = `capacidadGB` * 1024<br>`capacidadKB` = `capacidadMB` * 1024<br>`capacidadTB` = `capacidadGB` / 1024 | `capacidadMB` (Real)<br>`capacidadKB` (Real)<br>`capacidadTB` (Real) |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Declarar la variable de entrada `capacidadGB` y las variables de salida `capacidadMB`, `capacidadKB` y `capacidadTB` como tipo Real.
3. Solicitar al usuario que ingrese la cantidad de almacenamiento en Gigabytes (GB).
4. Guardar el valor ingresado en la variable `capacidadGB`.
5. Calcular `capacidadMB` multiplicando `capacidadGB` por 1024.
6. Calcular `capacidadKB` multiplicando `capacidadMB` por 1024.
7. Calcular `capacidadTB` dividiendo `capacidadGB` entre 1024.
8. Mostrar los resultados formateados en pantalla (MB, KB y TB).
9. Fin del algoritmo.