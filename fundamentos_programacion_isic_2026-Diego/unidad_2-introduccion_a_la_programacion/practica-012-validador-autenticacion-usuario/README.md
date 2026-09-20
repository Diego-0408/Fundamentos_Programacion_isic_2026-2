# Práctica 012: Validador de autenticacion de usuario

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
Para autenticar al usuario de forma segura, el algoritmo compara el PIN ingresado directamente con la clave fija guardada en el sistema. Utilizando una bifurcación doble, decide instantáneamente si otorga el acceso o muestra el aviso de credencial incorrecta según coincida o no el código.