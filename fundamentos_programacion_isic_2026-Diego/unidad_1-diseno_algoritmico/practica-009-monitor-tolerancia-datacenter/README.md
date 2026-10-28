# Práctica 09: Monitor booleano de tolerancia en datacenter

## Información General
* **Asignatura:** Fundamentos de Programación
* **Unidad:** Unidad 1 - Tipos de datos, variables y expresiones
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
Para mantener bajo control el datacenter, el algoritmo evalúa la temperatura y la humedad al mismo tiempo utilizando expresiones lógicas compuestas. En lugar de usar bifurcaciones o decisiones con condicionales, verifica si ambos parámetros están dentro del rango seguro y si alguno sobrepasa el límite, entregando inmediatamente en un solo mensaje los valores booleanos de operación normal y de alerta.