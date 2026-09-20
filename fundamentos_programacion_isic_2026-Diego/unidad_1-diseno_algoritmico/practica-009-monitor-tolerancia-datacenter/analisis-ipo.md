# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un servidor de misión crítica en un centro de datos requiere operar dentro de rangos ambientales estrictos (temperatura entre 18.0 °C y 24.0 °C, y humedad relativa entre 40.0% y 60.0%). Se solicita construir un algoritmo que capture ambos parámetros y evalúe mediante expresiones lógicas compuestas si la operación es totalmente normativa o si existe un estado de riesgo por desbordamiento de límites, desplegando ambos resultados booleanos en una sola salida sin hacer uso de estructuras condicionales.

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `temperatura` (Real)<br>`humedad` (Real) | `tempOK` = (`temperatura` >= 18.0) Y (`temperatura` <= 24.0)<br>`humedadOK` = (`humedad` >= 40.0) Y (`humedad` <= 60.0)<br>`operacionNormativa` = `tempOK` Y `humedadOK`<br>`alertaRiesgo` = (`temperatura` > 24.0) O (`humedad` > 60.0) | `operacionNormativa` (Booleano)<br>`alertaRiesgo` (Booleano) |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Declarar las variables de entrada (`temperatura`, `humedad` como Real) y las variables de proceso y salida (`tempOK`, `humedadOK`, `operacionNormativa`, `alertaRiesgo` como Booleano).
3. Solicitar y capturar los valores actuales de temperatura y humedad ambiental.
4. Evaluar si la temperatura y la humedad se encuentran individualmente dentro de sus rangos normativos.
5. Determinar la operación normativa mediante la conjunción lógica (`Y`) de las dos validaciones.
6. Determinar si existe alerta de riesgo evaluando si la temperatura o la humedad superan los límites superiores mediante el operador de disyunción (`O`).
7. Desplegar en una sola pantalla de salida los resultados booleanos de operación normativa y alerta de riesgo.
8. Fin del algoritmo.