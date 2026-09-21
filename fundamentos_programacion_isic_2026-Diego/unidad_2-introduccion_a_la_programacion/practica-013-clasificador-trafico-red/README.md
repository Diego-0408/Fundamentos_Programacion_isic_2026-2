# Práctica 013: Clasficador de trafico QoS de Red

## Información General
* **Asignatura:** Fundamentos de Programación
* **Unidad:** Unidad 1 - Tipos de datos, variables y expresiones
* **Estudiante:** Diego Miguel Castro Arellano
* **Número de Control:** 260112001
* **Fecha de Entrega:** 21/9/26

## Archivos de la Evidencia
1. `analisis-ipo.md`: Análisis Entrada-Proceso-Salida.
2. `pseudocodigo.txt`: Archivo txt.
3. `diagrama-flujo.dfd`: Diagrama de flujo exportado de DFD.
4. `casos-prueba.md`: Tabla de validación de resultados.
5. `reflexion.md`: Autoevaluación y aprendizajes clave.

## Resumen de la Solución
Para organizar el tráfico del router, el algoritmo recibe el número de puerto y lo pasa por un filtro anidado. Evalúa secuencialmente en qué rango numérico cae el valor para clasificarlo en prioridad alta, media o baja, y si el número resulta estar fuera de los límites de red permitidos, descarta la entrada emitiendo la alerta de puerto inválido.