# Práctica 07: Verificador relacional de acuerdos de nivel de servicio (SLA)

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
Para verificar si la API cumple con el acuerdo de nivel de servicio, el algoritmo compara directamente el tiempo de respuesta ingresado contra el límite permitido de 200 milisegundos. En lugar de usar un filtro o tomar un camino con condicionales, evalúa esa comparación en un solo paso y devuelve de inmediato un resultado lógico puro (VERDADERO o FALSO), dejando claro y sin rodeos si el sistema está dentro del rango aceptable.