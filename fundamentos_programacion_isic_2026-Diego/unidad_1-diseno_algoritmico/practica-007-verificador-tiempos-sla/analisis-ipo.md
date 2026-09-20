# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un centro de datos requiere auditar el rendimiento de una API para garantizar que su tiempo de respuesta no supere el límite establecido en el acuerdo de nivel de servicio (SLA) de 200.0 ms. Se debe desarrollar un algoritmo que evalúe directamente la medición ingresada mediante una expresión relacional simple, almacenando y mostrando el resultado lógico de cumplimiento sin utilizar estructuras condicionales.

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `tiempoRespuesta` (Real) | `SLA_LIMITE` = 200.0<br>`cumpleSLA` = (`tiempoRespuesta` <= `SLA_LIMITE`) | `cumpleSLA` (Booleano) |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Declarar la constante `SLA_LIMITE` con el valor de 200.0.
3. Declarar la variable de entrada (`tiempoRespuesta`) como tipo Real y la variable de salida (`cumpleSLA`) como tipo Booleano.
4. Solicitar y capturar el tiempo de respuesta de la API en milisegundos desde el teclado.
5. Evaluar directamente si `tiempoRespuesta` es menor o igual a `SLA_LIMITE` y asignar el resultado relacional a `cumpleSLA`.
6. Desplegar en pantalla el estado booleano de cumplimiento del acuerdo SLA.
7. Fin del algoritmo.