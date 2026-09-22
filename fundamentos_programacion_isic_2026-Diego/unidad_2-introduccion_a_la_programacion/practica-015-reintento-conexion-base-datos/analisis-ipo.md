# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un cliente de base de datos requiere establecer conexión remota mediante un mecanismo de autenticación con reintentos limitados. Se solicita diseñar un bucle repetitivo evaluado al inicio (`Mientras`) que permita un máximo de 3 intentos para ingresar la contraseña correcta (`dbpass123`). El programa debe actualizar el estado de la bandera `estado_conexion` a `VERDADERO` e interrumpir las iteraciones si la clave es correcta; de lo contrario, incrementará el contador de intentos y emitirá un mensaje de límite de intentos agotados si falla en sus 3 oportunidades.

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `passwordIngresada` (Cadena) | `PASSWORD_USUARIO` = "dbpass123"<br>`intento` = 1<br>`estado_conexion` = FALSO<br><br>**Mientras** `intento` <= 3 **Y** `estado_conexion` = FALSO **Hacer**<br>&nbsp;&nbsp;&nbsp;&nbsp;Leer `passwordIngresada`<br>&nbsp;&nbsp;&nbsp;&nbsp;**Si** `passwordIngresada` = `PASSWORD_USUARIO` **Entonces**<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`estado_conexion` = VERDADERO<br>&nbsp;&nbsp;&nbsp;&nbsp;**Sino**<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`intento` = `intento` + 1<br>&nbsp;&nbsp;&nbsp;&nbsp;**FinSi**<br>**FinMientras** | Mensaje de estatus final de la conexión (Exitosa o Agotada) |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Definir la constante `PASSWORD_USUARIO` con la cadena "dbpass123".
3. Inicializar la variable de control `intento` en 1 y la bandera `estado_conexion` en `FALSO`.
4. Iniciar la estructura repetitiva pre-prueba `Mientras` evaluando que `intento` sea menor o igual a 3 Y `estado_conexion` continúe en `FALSO`.
5. Solicitar y capturar la contraseña ingresada por el usuario en cada iteración.
6. Comparar la contraseña ingresada contra la constante. Si coinciden, modificar `estado_conexion` a `VERDADERO`.
7. Si no coinciden, notificar el error e incrementar el contador de `intento` en 1.
8. Al salir del ciclo, verificar si `estado_conexion` se mantuvo en `FALSO` para imprimir la alerta de intentos agotados.
9. Fin del algoritmo.