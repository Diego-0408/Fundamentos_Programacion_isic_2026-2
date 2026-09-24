# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Una pasarela de pagos digitales procesa un lote de transacciones bancarias iniciando con un saldo de referencia de $5000.00. El sistema solicita operaciones mediante un menú interactivo hasta que el usuario decida salir. Cada transacción requiere validar el tipo de operación (1: Depósito, 2: Retiro) y asegurar que los montos ingresados sean positivos. En el caso de los retiros, se verifica la disponibilidad de saldo; si el monto supera los fondos, se notifica el error y se registra como transacción rechazada. Al terminar la sesión, se presenta un balance general consolidado.

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `opc` (Entero)<br>`tipo` (Entero)<br>`monto` (Real) | `saldo` = 5000.0, `depTotal` = 0.0, `retTotal` = 0.0, `ok` = 0, `error` = 0<br><br>**Mientras** `opc` != 0 **Hacer**<br>&nbsp;&nbsp;&nbsp;&nbsp;Leer `opc`<br>&nbsp;&nbsp;&nbsp;&nbsp;**Si** `opc` == 1 **Entonces**<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Validar `tipo` (1 o 2) y `monto` (> 0)<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Si** `tipo` == 1 **Entonces**<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`saldo` = `saldo` + `monto`, `depTotal` = `depTotal` + `monto`, `ok`++<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Sino**<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Si** `monto` <= `saldo` **Entonces**<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`saldo` = `saldo` - `monto`, `retTotal` = `retTotal` + `monto`, `ok`++<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Sino**<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Mostrar 'Fondos Insuficientes', `error`++<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**FinSi**<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**FinSi**<br>&nbsp;&nbsp;&nbsp;&nbsp;**FinSi**<br>**FinMientras** | Mensaje de estado por transacción ('Deposito ok', 'Retiro ok' o 'Fondos Insuficientes').<br><br>Reporte consolidado final:<br>- Saldo final<br>- Total depositado<br>- Total retirado<br>- Transacciones aprobadas<br>- Transacciones rechazadas |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Definir e inicializar `saldo` en 5000.0, acumuladores (`depTotal`, `retTotal`) en 0.0 y contadores (`ok`, `error`) en 0.
3. Iniciar la estructura repetitiva `Mientras` evaluando `opc != 0`.
4. Mostrar menú de opciones y capturar `opc`.
5. Si `opc` es igual a 1:
   a. Repetir la lectura de `tipo` hasta que se ingrese 1 (Depósito) o 2 (Retiro).
   b. Repetir la lectura de `monto` hasta que sea un valor mayor a 0.
   c. Si `tipo` es igual a 1, actualizar `saldo`, acumular en `depTotal` e incrementar `ok`.
   d. Si `tipo` es igual a 2, verificar si `monto <= saldo`. Si cumple, descontar de `saldo`, acumular en `retTotal` e incrementar `ok`. De lo contrario, emitir alerta de fondos insuficientes e incrementar `error`.
6. Al ingresar `opc = 0`, terminar el ciclo.
7. Desplegar el reporte con el saldo final, totales acumulados y conteo de transacciones.
8. Fin del algoritmo.