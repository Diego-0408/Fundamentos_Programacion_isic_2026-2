# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un balanceador de carga administra un clúster de servidores web controlando flujos de peticiones en MB con un límite estricto de 50 MB por servidor, acumulando métricas globales e individuales.

## 2. Tabla Entrada-Proceso-Salida
| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| Cantidad de servidores ($N$), Tamaño de peticiones en MB | Bucles anidados (`Para` y `Mientras`), acumulación de MB y conteo de peticiones | Resumen por servidor y reporte global del clúster |

## 3. Algoritmo en Lenguaje Natural
1. Solicitar la cantidad de servidores ($N$).
2. Recorrer cada servidor acumulando peticiones válidas (menores o iguales a 50 MB).
3. Mostrar el reporte global de MB y peticiones al finalizar.