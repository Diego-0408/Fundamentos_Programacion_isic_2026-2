# Práctica 028: Generador de matrices de pixeles ASCII

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
Armamos una cuadrícula de asteriscos usando dos bucles Para anidados: uno para controlar las filas y otro para las columnas. Como DFD no tiene una instrucción directa tipo Sin Saltar para imprimir en la misma línea, la solución fue ir acumulando los asteriscos en una variable de texto y, al terminar cada ciclo horizontal, mandar el renglón completo a la pantalla.