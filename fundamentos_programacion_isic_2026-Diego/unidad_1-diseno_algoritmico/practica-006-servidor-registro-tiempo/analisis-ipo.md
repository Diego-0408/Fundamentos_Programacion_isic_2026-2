# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un servidor Linux registra el tiempo de actividad en segundos acumulados. Se requiere construir un algoritmo que reciba una cantidad entera de segundos totales y los desglose en un formato comprensible expresado en horas completas, minutos completos restantes y segundos finales.

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `segundosTotales` (Entero) | `horas` = TRUNC(`segundosTotales` / 3600)<br>`segundosRestantes` = `segundosTotales` mod 3600<br>`minutos` = TRUNC(`segundosRestantes` / 60)<br>`segundosFinales` = `segundosRestantes` mod 60 | `horas` (Entero)<br>`minutos` (Entero)<br>`segundosFinales` (Entero) |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Declarar la variable de entrada (`segundosTotales`) y las variables del proceso y salida (`horas`, `segundosRestantes`, `minutos`, `segundosFinales`) como tipo Entero.
3. Solicitar y capturar la cantidad de segundos totales desde el teclado.
4. Obtener las horas dividiendo los segundos totales entre 3600 y aplicando truncamiento.
5. Calcular los segundos restantes no convertidos a horas utilizando el operador de residuo (módulo 3600).
6. Obtener los minutos dividiendo los segundos restantes entre 60 y aplicando truncamiento.
7. Calcular los segundos finales sobrantes aplicando el operador de residuo (módulo 60).
8. Desplegar en pantalla el tiempo desglosado en horas, minutos y segundos.
9. Fin del algoritmo.