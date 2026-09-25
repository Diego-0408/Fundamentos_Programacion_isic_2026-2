# Práctica 015: Reintento de conexion a base de datos

## Información General
* **Asignatura:** Fundamentos de Programación
* **Unidad:** Unidad 2 - Estructuras de control condicionales e iterativas básicas
* **Estudiante:** Diego Miguel Castro Arellano
* **Número de Control:** 260112001
* **Fecha de Entrega:** 22/9/26

## Archivos de la Evidencia
1. `analisis-ipo.md`: Análisis Entrada-Proceso-Salida.
2. `pseudocodigo.md`: Archivo md.
3. `diagrama-flujo.dfd`: Diagrama de flujo exportado de DFD.
4. `casos-prueba.md`: Tabla de validación de resultados.
5. `reflexion.md`: Autoevaluación y aprendizajes clave.

## Resumen de la Solución
Para gestionar la conexión a la base de datos, el programa inicializa un contador de intentos y una bandera de estado. Mediante un ciclo Mientras, permite solicitar la contraseña iterativamente hasta que el usuario acierte la clave correcta o agote sus tres oportunidades, garantizando que el acceso se otorgue inmediatamente o se bloquee por límite de fallos.