# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un administrador de red requiere asignar direcciones IP fijas a servidores en una subred con el rango `192.168.1.X`. Para evitar colisiones con IPs reservadas, la asignación debe realizarse dando saltos no consecutivos de 5 en 5 unidades en el último octeto. Se requiere construir un algoritmo mediante la estructura `Para` ajustando el parámetro de incremento (`Con Paso 5`) desde un host inicial hasta un host final.

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `hostInicial` (Entero)<br>`hostFinal` (Entero) | **Para** `octeto` = `hostInicial` **Hasta** `hostFinal` **Con Paso** 5 **Hacer**<br>&nbsp;&nbsp;&nbsp;&nbsp;Imprimir `'192.168.1.' + octeto`<br>**FinPara** | Serie correlativa de direcciones IP generadas en el formato `192.168.1.X`. |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Solicitar y capturar el valor del host inicial (`hostInicial`).
3. Solicitar y capturar el valor del host final (`hostFinal`).
4. Iniciar el ciclo repetitivo `Para` utilizando la variable contador `octeto` desde `hostInicial` hasta `hostFinal` con un incremento de 5 en 5.
5. En cada iteración, imprimir en pantalla la dirección IP completa concatenando el prefijo de red `192.168.1.` con el valor actual de `octeto`.
6. Al superar la variable `octeto` el valor de `hostFinal`, finalizar la ejecución del ciclo.
7. Fin del algoritmo.