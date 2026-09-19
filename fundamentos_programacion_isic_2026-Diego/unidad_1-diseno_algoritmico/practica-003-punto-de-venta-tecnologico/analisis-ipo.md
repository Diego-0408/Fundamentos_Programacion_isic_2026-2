# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Se requiere desarrollar un algoritmo para un punto de venta de tecnologia que calcule el importe total a pagar por la compra de tres productos tecnológicos. El sistema debe procesar los precios unitarios de cada producto, aplicar un costo fijo de envío ($150.00 MXN) y calcular el Impuesto al Valor Agregado (IVA del 16%), generando al final una lista comercial con el subtotal, el IVA acumulado, el costo de envío y el monto final a pagar.

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `precioProd1` (Real)<br>`precioProd2` (Real)<br>`precioProd3` (Real) | `costoEnvio` = 150.00<br>`subtotal` = `precioProd1` + `precioProd2` + `precioProd3`<br>`montoIVA` = `subtotal` * 0.16<br>`totalFinal` = `subtotal` + `montoIVA` + `costoEnvio` | `subtotal` (Real)<br>`montoIVA` (Real)<br>`costoEnvio` (Real)<br>`totalFinal` (Real) |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Declarar las variables de entrada (`precioProd1`, `precioProd2`, `precioProd3`), las variables del proceso (`costoEnvio`, `subtotal`, `montoIVA`) y la variable de salida (`totalFinal`) como tipo Real.
3. Asignar el valor fijo de 150.00 a la variable `costoEnvio`.
4. Solicitar y capturar los precios unitarios de los tres productos desde el teclado.
5. Sumar los tres precios unitarios para calcular el `subtotal`.
6. Multiplicar el `subtotal` por 0.16 para determinar el `montoIVA`.
7. Sumar el `subtotal`, el `montoIVA` y el `costoEnvio` para obtener el `totalFinal`.
8. Desplegar los resultados formateados en pantalla (Subtotal, IVA, Costo de Envío y Total a Pagar).
9. Fin del algoritmo.