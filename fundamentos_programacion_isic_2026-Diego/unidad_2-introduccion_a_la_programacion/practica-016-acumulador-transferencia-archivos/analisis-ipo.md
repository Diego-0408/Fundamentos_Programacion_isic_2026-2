# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un gestor de descargas requiere controlar el consumo de datos de un usuario estableciendo un límite de cuota estricto de 100.0 MB. Se solicita diseñar un algoritmo repetitivo basado en la estructura pre-prueba `Mientras` que solicite uno a uno el tamaño de los archivos a descargar en megabytes. El programa debe acumular los megabytes consumidos en la variable `totalDescargado`, incrementar el contador de archivos `numArchivos` y desplegar el avance en cada iteración. Una vez alcanzada o superada la cuota, el ciclo se interrumpe y despliega una única salida concatenada con el resumen final.

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `tamanoArchivo` (Real) en cada iteración | `totalDescargado` = 0.0<br>`numArchivos` = 0<br><br>**Mientras** `totalDescargado` < 100.0 **Hacer**<br>&nbsp;&nbsp;&nbsp;&nbsp;Leer `tamanoArchivo`<br>&nbsp;&nbsp;&nbsp;&nbsp;`totalDescargado` = `totalDescargado` + `tamanoArchivo`<br>&nbsp;&nbsp;&nbsp;&nbsp;`numArchivos` = `numArchivos` + 1<br>&nbsp;&nbsp;&nbsp;&nbsp;Desplegar avance parcial<br>**FinMientras** | Avance parcial por iteración (Texto)<br>Salida única final concatenada: `'Limite de cuota de datos alcanzado. Total final descargado: ' + totalDescargado + ' MB en ' + numArchivos + ' archivos procesados.'` |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Inicializar la variable acumuladora `totalDescargado` en 0.0 y la variable contadora `numArchivos` en 0.
3. Evaluar la condición pre-prueba del ciclo `Mientras`: verificar que `totalDescargado` sea estrictamente menor a 100.0 MB.
4. Solicitar y capturar el tamaño del archivo a descargar en megabytes (`tamanoArchivo`).
5. Sumar el valor ingresado a la variable acumuladora `totalDescargado`.
6. Sumar 1 al contador de archivos procesados `numArchivos`.
7. Mostrar en pantalla el avance parcial del total acumulado y la cantidad de archivos leídos hasta el momento.
8. Al alcanzar o superar los 100.0 MB, salir del ciclo `Mientras`.
9. Desplegar la salida final consolidada indicando el fin de la cuota, el total descargado y el número de archivos procesados.
10. Fin del algoritmo.