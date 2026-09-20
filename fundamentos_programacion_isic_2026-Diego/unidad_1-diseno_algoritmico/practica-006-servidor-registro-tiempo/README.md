# Práctica 06: Servidor de registro de tiempo y desgloce de unidades

## Información General
* **Asignatura:** Fundamentos de Programación
* **Unidad:** Unidad 1 - Tipos de datos, variables y expresiones
* **Estudiante:** Diego Miguel Castro Arellano
* **Número de Control:** 260112001
* **Fecha de Entrega:** 19/9/26

## Archivos de la Evidencia
1. `analisis-ipo.md`: Análisis Entrada-Proceso-Salida.
2. `pseudocodigo.txt`: Archivo txt.
3. `diagrama-flujo.dfd`: Diagrama de flujo exportado de DFD.
4. `casos-prueba.md`: Tabla de validación de resultados.
5. `reflexion.md`: Autoevaluación y aprendizajes clave.

## Resumen de la Solución
Mi algoritmo se usa para transformar esa suma masiva de segundos en algo comprensible, el algoritmo toma el total que registro el servidor y lo va dividiendo en trozos manejables. Primero extrae las horas completas descartando los decimales y, con lo que sobra, calcula los minutos y segundos exactos para entregarte el tiempo real de actividad limpio y fácil de leer.