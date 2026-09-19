# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
El problema a resolver es la captura de los datos de los estudiantes para poder desplegar su ficha digital, se espera
que se recopile la informacion del alumno en orden y respetando cada tipo de dato

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `numero_Control` (entero)<br>`nombre_Completo` (string)<br>`promedioPrepa` (real)<br>`estatus_Documentos` (bool) | Lectura secuencial<br>Asignacion de variables | Ficha digital escolar<br>`numero_Control` (entero)<br>`nombre_Completo` (string)<br>`promedioPrepa` (real)<br>`estatus_Documentacion` (bool) |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Declarar las variables (numero de control,nombre del estudiante, promedio de preparatoria, Estatus).
3. Solicitar y capturar las entradas que escriba el estudiante en el el teclado.
4. Escribir en pantalla todos los datos de forma ordenada para mostrale su ficha al estudiante.
5. Fin del algoritmo.