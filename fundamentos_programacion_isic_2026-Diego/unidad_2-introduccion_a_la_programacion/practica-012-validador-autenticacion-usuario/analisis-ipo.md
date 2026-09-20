# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un módulo de login requiere validar las credenciales de un administrador mediante un número PIN de acceso de 4 dígitos. Se solicita diseñar un algoritmo que compare el PIN ingresado contra la constante predefinida `PIN_CORRECTO` (4321) mediante una estructura selectiva doble (`Si-Entonces-Sino`). Si el PIN coincide, el sistema concede el acceso; de lo contrario, despliega un mensaje explícito de rechazo.

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `pinIngresado` (Entero) | `PIN_CORRECTO` = 4321<br>**Si** `pinIngresado` = `PIN_CORRECTO` **Entonces**<br>&nbsp;&nbsp;&nbsp;&nbsp;Mensaje = "Acceso Concedido"<br>**Sino**<br>&nbsp;&nbsp;&nbsp;&nbsp;Mensaje = "Acceso Denegado: PIN Incorrecto"<br>**FinSi** | Mensaje de autorización o rechazo (Texto) |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Definir la constante `PIN_CORRECTO` con el valor numérico 4321.
3. Declarar la variable `pinIngresado` de tipo Entero.
4. Solicitar y capturar el PIN numérico de 4 dígitos proporcionado por el usuario.
5. Evaluar mediante una estructura selectiva doble si `pinIngresado` es exactamente igual a `PIN_CORRECTO`.
6. Si la condición es verdadera, desplegar el mensaje "Acceso Concedido".
7. Si la condición es falsa, ejecutar la rama alternativa y desplegar "Acceso Denegado: PIN Incorrecto".
8. Fin del algoritmo.