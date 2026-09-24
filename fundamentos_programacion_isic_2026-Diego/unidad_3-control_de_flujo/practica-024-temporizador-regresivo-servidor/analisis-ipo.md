# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un script de mantenimiento programa el apagado de un servidor de aplicaciones otorgando una cuenta regresiva de $T$ segundos para que los usuarios guarden su trabajo. Se requiere controlar ciclos repetitivos en orden descendente especificando pasos negativos mediante la estructura `Para ... Con Paso -1` hasta llegar al límite de 0 segundos e imprimir el mensaje de cierre.

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `segundosIniciales` (Entero) | **Para** `t` = `segundosIniciales` **Hasta** 0 **Con Paso** -1 **Hacer**<br>&nbsp;&nbsp;&nbsp;&nbsp;Imprimir `'Tiempo restante: ' + t`<br>**FinPara** | Conteo regresivo segundo a segundo hasta 0.<br><br>Mensaje de cierre: `'Servidor Apagado Correctamente'`. |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Solicitar y capturar el tiempo inicial en segundos (`segundosIniciales`).
3. Iniciar el bucle `Para` empleando la variable de control `t` desde `segundosIniciales` hasta 0 con un decremento de `-1`.
4. En cada iteración, mostrar en pantalla el valor actual del tiempo restante, incluyendo el 0.
5. Al concluir el ciclo descendente al llegar a 0, imprimir el mensaje de confirmación `"Servidor Apagado Correctamente"`.
6. Fin del algoritmo.