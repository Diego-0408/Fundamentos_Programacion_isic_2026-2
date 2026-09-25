# Práctica 011: Monitor de dobrecarga de servidor

## Información General
* **Asignatura:** Fundamentos de Programación
* **Unidad:** Unidad 2 - Estructuras de control condicionales e iterativas básicas
* **Estudiante:** Diego Miguel Castro Arellano
* **Número de Control:** 260112001
* **Fecha de Entrega:** 19/9/26

## Archivos de la Evidencia
1. `analisis-ipo.md`: Análisis Entrada-Proceso-Salida.
2. `pseudocodigo.md`: Archivo md.
3. `diagrama-flujo.dfd`: Diagrama de flujo exportado de DFD.
4. `casos-prueba.md`: Tabla de validación de resultados.
5. `reflexion.md`: Autoevaluación y aprendizajes clave.

## Resumen de la Solución
Para monitorear el procesador del servidor, el algoritmo arranca asumiendo que todo está en orden e inicializa la alerta en falso. Únicamente si el porcentaje de CPU sobrepasa el 85%, entra a la condicional simple para encender la bandera de alerta y soltar el mensaje de advertencia; si el uso es normal, el programa ignora ese bloque y simplemente entrega el reporte final sin dar rodeos.