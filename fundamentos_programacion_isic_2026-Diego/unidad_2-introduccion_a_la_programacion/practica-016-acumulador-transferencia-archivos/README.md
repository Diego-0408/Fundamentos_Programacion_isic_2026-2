# Práctica 016: Acumulador de transferencia de archivos

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
Para llevar el control exacto de la cuota de descargas, el programa inicializa un acumulador de megabytes y un contador de archivos. A través del bucle Mientras, solicita consecutivamente el tamaño de cada archivo hasta superar el límite de 100 MB, desplegando al final una única cadena resumen con el consumo total alcanzado.