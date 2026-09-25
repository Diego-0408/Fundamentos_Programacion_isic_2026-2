# Práctica 029: Simulacion de crecimiento de carga de servidor

## Información General
* **Asignatura:** Fundamentos de Programación
* **Unidad:** Unidad 3 - Tipos de datos, variables y expresiones
* **Estudiante:** Diego Miguel Castro Arellano
* **Número de Control:** 260112001
* **Fecha de Entrega:** 24/9/26

## Archivos de la Evidencia
1. `analisis-ipo.md`: Análisis Entrada-Proceso-Salida.
2. `pseudocodigo.txt`: Archivo txt.
3. `diagrama-flujo.dfd`: Diagrama de flujo exportado de DFD.
4. `casos-prueba.md`: Tabla de validación de resultados.
5. `reflexion.md`: Autoevaluación y aprendizajes clave.

## Resumen de la Solución
Simulamos el crecimiento exponencial de la carga de un servidor usando un bucle Mientras condicionado a que las peticiones sean menores a 10,000. En cada ciclo se multiplica la carga actual por 1.20 (el 20% de incremento) y se cuenta una hora, validando previamente que el valor inicial no rebase el límite permitido.