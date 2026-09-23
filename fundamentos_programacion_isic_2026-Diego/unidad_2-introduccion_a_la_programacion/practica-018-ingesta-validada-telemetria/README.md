# Práctica 018: Ingesta validad de telemetria

## Información General
* **Asignatura:** Fundamentos de Programación
* **Unidad:** Unidad 1 - Tipos de datos, variables y expresiones
* **Estudiante:** Diego Miguel Castro Arellano
* **Número de Control:** 260112001
* **Fecha de Entrega:** 22/9/26

## Archivos de la Evidencia
1. `analisis-ipo.md`: Análisis Entrada-Proceso-Salida.
2. `pseudocodigo.txt`: Archivo txt.
3. `diagrama-flujo.dfd`: Diagrama de flujo exportado de DFD.
4. `casos-prueba.md`: Tabla de validación de resultados.
5. `reflexion.md`: Autoevaluación y aprendizajes clave.

## Resumen de la Solución
Para asegurar la integridad de la telemetría, el programa implementa un bucle de validación con la estructura Repetir - Hasta Que. Si el sensor o el usuario proporcionan una temperatura fuera del límite operativo (-50.0 °C a 100.0 °C), el sistema atrapa la ejecución, notifica el error y exige una nueva lectura hasta recibir un dato válido.