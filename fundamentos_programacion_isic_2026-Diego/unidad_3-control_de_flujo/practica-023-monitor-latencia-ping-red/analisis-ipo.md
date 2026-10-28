# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Una herramienta de diagnóstico de red ejecuta 5 pruebas de latencia (Ping) medidas en milisegundos (ms)[cite: 4]. Se requiere calcular la latencia promedio del rendimiento y determinar la latencia máxima registrada (peor caso) utilizando variables acumuladoras y selectores de máximos dentro de un bucle determinado[cite: 4].

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `latencia` (Real, ingresada 5 veces)[cite: 4] | **Para** `i` = 1 **Hasta** 5 **Con Paso** 1 **Hacer**<br>&nbsp;&nbsp;&nbsp;&nbsp;`sumaLatencias` = `sumaLatencias` + `latencia`[cite: 4]<br>&nbsp;&nbsp;&nbsp;&nbsp;**Si** `latencia` > `latenciaMaxima` **Entonces**<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`latenciaMaxima` = `latencia`[cite: 4]<br>&nbsp;&nbsp;&nbsp;&nbsp;**FinSi**<br>**FinPara**<br><br>`promedio` = `sumaLatencias` / 5 | Latencia promedio calculada[cite: 4].<br>Latencia máxima registrada (peor caso)[cite: 4]. |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Inicializar `sumaLatencias` y `latenciaMaxima` en 0.0.
3. Iniciar el bucle `Para` desde 1 hasta 5 iteraciones.
4. En cada iteración, solicitar y capturar el tiempo de respuesta en ms (`latencia`).
5. Acumular el valor sumándolo a `sumaLatencias`.
6. Evaluar mediante un condicional si la `latencia` actual es mayor a `latenciaMaxima`; de ser así, actualizar `latenciaMaxima` con el nuevo valor.
7. Al concluir las 5 pruebas, calcular el `promedio` dividiendo `sumaLatencias` entre 5.
8. Desplegar en pantalla el promedio obtenido y la latencia máxima registrada.
9. Fin del algoritmo.