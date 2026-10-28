# Práctica 026: Recepcion de archivo por fragmentos (Streaming)

## Información General
* **Asignatura:** Fundamentos de Programación
* **Unidad:** Unidad 3 - Estructuras de control de flujo avanzadas y bucles anidados
* **Estudiante:** Diego Miguel Castro Arellano
* **Número de Control:** 260112001
* **Fecha de Entrega:** 24/9/26

## Archivos de la Evidencia
1. `analisis-ipo.md`: Análisis Entrada-Proceso-Salida.
2. `pseudocodigo.md`: Archivo md.
3. `diagrama-flujo.dfd`: Diagrama de flujo exportado de DFD.
4. `casos-prueba.md`: Tabla de validación de resultados.
5. `reflexion.md`: Autoevaluación y aprendizajes clave.

## Resumen de la Solución
Se desarrolló un algoritmo de streaming que utiliza un bucle condicionado al tamaño remanente de un archivo. El sistema procesa fragmentos de datos variables restándolos iterativamente e incluye una regla de validación para ajustar el saldo a cero si un bloque excede lo pendiente, finalizando la descarga con éxito.