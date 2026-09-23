# Práctica 19: Analizador de logs de sistema

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
El programa recibe la cantidad de registros a analizar y ejecuta un bucle iterativo donde evalúa cada código de estado HTTP mediante estructuras condicionales anidadas. Esto permite clasificar de forma independiente y precisa cada respuesta en peticiones exitosas (200), errores de cliente (4xx) y errores de servidor (5xx), desplegando al final un consolidado estadístico del lote.