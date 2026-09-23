# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Una herramienta de diagnóstico de red requiere desplegar iterativamente un menú de consola con las opciones: 1. Ping a Servidor, 2. Traceroute y 0. Salir. Se solicita utilizar una estructura post-prueba (`Repetir - Hasta Que`) para garantizar que el menú se muestre al menos una vez y continúe ejecutándose repetidamente hasta que el usuario ingrese la opción de salida `0`.

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `opcion` (Entero) en cada iteración | **Repetir**<br>&nbsp;&nbsp;&nbsp;&nbsp;Desplegar Menú<br>&nbsp;&nbsp;&nbsp;&nbsp;Leer `opcion`<br>&nbsp;&nbsp;&nbsp;&nbsp;Evaluar opción seleccionada<br>**Hasta Que** `opcion` = 0 | Mensajes de ejecución de la herramienta seleccionada o mensaje de salida final. |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Iniciar el bloque post-prueba `Repetir`.
3. Desplegar en pantalla las opciones del menú interactivo (1. Ping, 2. Traceroute, 0. Salir).
4. Capturar el valor entero ingresado en la variable `opcion`.
5. Procesar la selección: mostrar confirmación de ejecución si es 1 o 2, o mensaje de error si es una opción no válida.
6. Evaluar la condición de término `Hasta Que opcion = 0`.
7. Si `opcion` es diferente de 0, reiniciar la ejecución del bucle.
8. Si `opcion` es igual a 0, finalizar el algoritmo mostrando el mensaje de salida.
9. Fin del algoritmo.