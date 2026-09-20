# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
El departamento de investigación requiere evaluar automáticamente la elegibilidad de los estudiantes que solicitan una beca. Para ser dictaminado como elegible, el aspirante debe cumplir simultáneamente con dos requisitos indispensables: tener un promedio general igual o superior a 85.0 y haber aprobado un mínimo de 45 créditos. Se debe construir un algoritmo que evalúe ambas condiciones mediante una expresión lógica compuesta y exprese el resultado mediante un valor booleano sin usar condicionales.

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `promedioGeneral` (Real)<br>`creditosAprobados` (Entero) | `esElegible` = (`promedioGeneral` >= 85.0) Y (`creditosAprobados` >= 45) | `esElegible` (Booleano) |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Declarar las variables de entrada (`promedioGeneral` como Real, `creditosAprobados` como Entero) y la variable de salida (`esElegible` como Booleano).
3. Solicitar y capturar el promedio general y la cantidad de créditos aprobados desde el teclado.
4. Evaluar la conjunción lógica compuesta de que el promedio sea mayor o igual a 85.0 y los créditos aprobados sean mayores o iguales a 45.
5. Asignar el resultado lógico directo (`VERDADERO` o `FALSO`) a la variable `esElegible`.
6. Desplegar en pantalla el dictamen booleano de elegibilidad del candidato.
7. Fin del algoritmo.