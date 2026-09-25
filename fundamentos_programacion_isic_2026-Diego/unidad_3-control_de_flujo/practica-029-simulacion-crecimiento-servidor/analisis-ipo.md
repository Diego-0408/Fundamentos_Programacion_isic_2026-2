# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un servidor web recibe P peticiones iniciales por minuto. Cada hora, la carga se incrementa en un 20% respecto a la hora anterior (P = P x 1.20). El administrador requiere determinar cuántas horas transcurrirán antes de superarse el límite del servidor de 10,000 peticiones mediante un bucle Mientras y una validación de restricción estricta.

## 2. Tabla Entrada-Proceso-Salida
| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `peticionesIniciales` (Real) | `peticionesIniciales < 10000`<br>`cargaActual <- peticionesIniciales`<br>`horas <- 0`<br>`cargaActual < 10000`<br>`cargaActual <- cargaActual * 1.20`<br>`horas <- horas + 1` | Reporte hora por hora de la carga del servidor<br>Total de horas hasta la saturación y mensaje final |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Declarar las variables necesarias (`peticionesIniciales`, `cargaActual`, `horas`).
3. Solicitar y capturar las peticiones iniciales desde el teclado.
4. Validar que `peticionesIniciales < 10000` para cumplir con la restricción del sistema.
5. Inicializar la carga actual y el contador de horas en cero.
6. Ejecutar el bucle Mientras mientras la carga sea menor a 10,000, incrementando la carga un 20% y sumando una hora por cada ciclo.
7. Desplegar el reporte en tiempo real y el total de horas transcurridas al saturarse el servidor.
8. Fin del algoritmo.