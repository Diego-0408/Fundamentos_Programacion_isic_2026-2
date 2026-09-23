# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un sensor de temperatura en un centro de datos transmite mediciones que a veces reportan valores erróneos fuera del rango físico operacional (-50.0 °C a 100.0 °C). Se requiere implementar un patrón de validación de entradas utilizando una estructura post-prueba (`Repetir - Hasta Que`) para filtrar y rechazar lecturas inválidas, manteniendo al usuario en un bucle de solicitud hasta que ingrese una medición dentro del rango permitido.

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `temperatura` (Real) | **Repetir**<br>&nbsp;&nbsp;&nbsp;&nbsp;Leer `temperatura`<br>&nbsp;&nbsp;&nbsp;&nbsp;**Si** `temperatura` < -50.0 **O** `temperatura` > 100.0 **Entonces**<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Mostrar mensaje de error<br>&nbsp;&nbsp;&nbsp;&nbsp;**FinSi**<br>**Hasta Que** `temperatura` >= -50.0 **Y** `temperatura` <= 100.0 | Mensaje de error al ingresar dato inválido.<br>Mensaje final de confirmación: `'Lectura confirmada y aceptada por el sistema: ' + temperatura` |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Iniciar la estructura repetitiva post-prueba `Repetir`.
3. Solicitar y leer la medición de la variable `temperatura`.
4. Evaluar si `temperatura` es menor a -50.0 o mayor a 100.0.
5. Si la evaluación es verdadera, desplegar un mensaje de error notificando que la lectura está fuera de rango.
6. Evaluar la condición del ciclo `Hasta Que temperatura >= -50.0 Y temperatura <= 100.0`.
7. Si el valor ingresado es inválido, volver al paso 3.
8. Al recibir una temperatura válida, salir del ciclo y desplegar el mensaje de confirmación con la lectura aceptada.
9. Fin del algoritmo.