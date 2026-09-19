# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Se requiere desarrollar un algoritmo para calcular la calificación final ponderada de un alumno en la asignatura de Fundamentos de Programación. El programa debe solicitar las notas obtenidas en cuatro rubros diferentes (escalas de 0 a 100) y evaluar una expresión matemática explícita aplicando sus respectivos porcentajes: Exámenes (40%), Prácticas de Laboratorio (30%), Proyecto Integrador (20%) y Autoevaluación/Tareas (10%).

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `notaExamenes` (Real)<br>`notaPracticas` (Real)<br>`notaProyecto` (Real)<br>`notaTareas` (Real) | `promedioPonderado` = (`notaExamenes` * 0.40) + (`notaPracticas` * 0.30) + (`notaProyecto` * 0.20) + (`notaTareas` * 0.10) | `promedioPonderado` (Real) |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Declarar las variables de entrada (`notaExamenes`, `notaPracticas`, `notaProyecto`, `notaTareas`) y la variable de salida (`promedioPonderado`) como tipo Real.
3. Solicitar y capturar las calificaciones de los cuatro rubros evaluativos desde el teclado.
4. Calcular el promedio aplicando los porcentajes correspondientes mediante una expresión parentizada explícita.
5. Desplegar el resultado del promedio ponderado final obtenido en pantalla.
6. Fin del algoritmo.