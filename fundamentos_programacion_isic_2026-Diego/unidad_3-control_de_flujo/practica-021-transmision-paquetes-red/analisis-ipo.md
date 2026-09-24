# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un emulador de red requiere simular el envío secuencial de un lote de $N$ paquetes de datos hacia un servidor remoto. Dado que la cantidad de iteraciones se conoce de forma previa a la ejecución, se debe emplear una estructura repetitiva determinada (`Para / for`) que gestione automáticamente una variable contador para desplegar el número de secuencia correlativo correspondiente a cada paquete transmitido y un mensaje de cierre al concluir el proceso.

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `totalPaquetes` (Entero) | **Para** `i` = 1 **Hasta** `totalPaquetes` **Con Paso** 1 **Hacer**<br>&nbsp;&nbsp;&nbsp;&nbsp;Mostrar mensaje de envío con secuencia `i`<br>**FinPara** | Mensaje secuencial por iteración: `'Enviando paquete ' + i + ' de ' + totalPaquetes + '...'`<br><br>Mensaje de confirmación final: `'Transmisión completada con éxito.'` |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Solicitar y capturar el número total de paquetes a transmitir (`totalPaquetes`).
3. Inicializar la estructura repetitiva determinada `Para` utilizando la variable iteradora `i` desde 1 hasta `totalPaquetes` con incremento de 1 en 1.
4. En cada iteración, imprimir en pantalla la notificación de transmisión indicando el valor actual del contador `i`.
5. Al alcanzar el límite superior y romper el bucle, desplegar el mensaje de cierre notificando que la transmisión ha finalizado con éxito.
6. Fin del algoritmo.