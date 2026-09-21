# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un router con Calidad de Servicio (QoS) requiere categorizar el tráfico de red según el puerto de destino ingresado. Se debe construir una estructura de decisiones anidadas (`Si-Entonces-Sino`) para evaluar rangos continuos: Puertos del 1 al 1024 como "Prioridad Alta", del 1025 al 49151 como "Prioridad Media", y del 49152 al 65535 como "Prioridad Baja". Cualquier valor fuera de estos límites debe catalogarse como "Puerto Inválido".

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `numeroPuerto` (Entero) | **Si** `numeroPuerto` >= 1 **Y** `numeroPuerto` <= 1024 **Entonces**<br>&nbsp;&nbsp;&nbsp;&nbsp;Categoria = "Prioridad Alta (Servicios del Sistema)"<br>**Sino**<br>&nbsp;&nbsp;&nbsp;&nbsp;**Si** `numeroPuerto` >= 1025 **Y** `numeroPuerto` <= 49151 **Entonces**<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Categoria = "Prioridad Media (Aplicaciones Registradas)"<br>&nbsp;&nbsp;&nbsp;&nbsp;**Sino**<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Si** `numeroPuerto` >= 49152 **Y** `numeroPuerto` <= 65535 **Entonces**<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Categoria = "Prioridad Baja (Puertos Dinamicos/Privados)"<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Sino**<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Categoria = "Puerto Invalido"<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**FinSi**<br>&nbsp;&nbsp;&nbsp;&nbsp;**FinSi**<br>**FinSi** | Categoria de prioridad asignada o mensaje de error (Texto) |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Declarar la variable `numeroPuerto` de tipo Entero.
3. Solicitar al usuario el número de puerto de destino.
4. Evaluar si el puerto pertenece al rango de 1 a 1024. De ser así, asignar Prioridad Alta.
5. De lo contrario, evaluar si el puerto pertenece al rango de 1025 a 49151. De ser así, asignar Prioridad Media.
6. De lo contrario, evaluar si el puerto pertenece al rango de 49152 a 65535. De ser así, asignar Prioridad Baja.
7. Si no pertenece a ninguno de los rangos anteriores, determinar que es un "Puerto Inválido".
8. Desplegar la categoría de prioridad resultante o el mensaje de error.
9. Fin del algoritmo.