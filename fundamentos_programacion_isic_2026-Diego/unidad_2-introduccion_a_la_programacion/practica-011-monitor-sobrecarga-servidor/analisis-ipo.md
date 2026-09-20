# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un servidor web requiere monitorear continuamente su porcentaje de uso de CPU. Se solicita diseñar un algoritmo que evalúe si la carga de procesador excede el umbral crítico del 85.0%. En caso de superarlo, el programa debe desplegar un mensaje de advertencia y cambiar el estado de la bandera `alertaActivada` a `VERDADERO`. Si la carga se mantiene dentro del rango tolerable, el programa debe concluir su reporte sin activar la alerta, utilizando estrictamente una estructura selectiva simple (`Si-Entonces`) sin cláusula de desvío alternativo (`Sino`).

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `usoCPU` (Real) | `alertaActivada` = FALSO<br>**Si** `usoCPU` > 85.0 **Entonces**<br>&nbsp;&nbsp;&nbsp;&nbsp;`alertaActivada` = VERDADERO<br>&nbsp;&nbsp;&nbsp;&nbsp;Desplegar mensaje de advertencia<br>**FinSi** | `usoCPU` (Real)<br>`alertaActivada` (Booleano / Texto)<br>Mensaje de advertencia condicional |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Declarar la variable de entrada `usoCPU` de tipo Real y la bandera `alertaActivada`.
3. Solicitar y capturar el porcentaje de uso actual de CPU.
4. Inicializar la variable `alertaActivada` con el valor por defecto de `FALSO`.
5. Evaluar mediante una estructura selectiva simple si el `usoCPU` es estrictamente mayor a 85.0.
6. Si la condición se cumple, cambiar el valor de `alertaActivada` a `VERDADERO` y mostrar en pantalla la advertencia de uso crítico.
7. Si la condición no se cumple, omitir el bloque de advertencia y continuar directamente el flujo.
8. Desplegar el reporte final con el porcentaje medido y el estado final de la bandera de alerta.
9. Fin del algoritmo.