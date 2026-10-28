# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un administrador de tareas escanea una lista simulada de Identificadores de Proceso (PIDs). El usuario busca un PID específico. La búsqueda debe detenerse inmediatamente cuando el PID sea encontrado (*Early Exit*) o cuando se alcance el límite de escaneo de 10 procesos, controlando la ejecución mediante condiciones lógicas compuestas en un bucle `Mientras`.

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `pidBuscado` (Entero)<br>`pidLeido` (Entero por iteración) | **Mientras** `i <= 10` **Y** `encontrado == FALSO` **Hacer**<br>Asignar y evaluar `pidLeido`<br>**Si** `pidLeido == pidBuscado` **Entonces**<br>`encontrado <- VERDADERO`<br>**Sino**<br>`i <- i + 1`<br>**FinSi**<br>**FinMientras** | Mensaje indicando si el proceso fue localizado y en qué posición/intento exacto. |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Solicitar y capturar el PID que se desea buscar (`pidBuscado`).
3. Inicializar el contador de posición `i` en 1 y la bandera de control `encontrado` en `FALSO`.
4. Ejecutar un bucle `Mientras` condicionado a que `i <= 10` y `encontrado` se mantenga en `FALSO`.
5. Evaluar dentro del ciclo el PID correspondiente a la posición actual.
6. Si el PID coincide con el buscado, cambiar la bandera a `VERDADERO` para efectuar la parada temprana; de lo contrario, incrementar `i` en 1.
7. Al salir del bucle, evaluar la bandera para imprimir el éxito de la localización y su intento, o notificar que el proceso no fue hallado tras los 10 intentos.
8. Fin del algoritmo.