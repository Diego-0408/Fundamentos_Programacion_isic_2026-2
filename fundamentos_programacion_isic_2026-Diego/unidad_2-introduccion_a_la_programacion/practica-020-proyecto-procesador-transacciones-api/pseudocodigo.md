Algoritmo: Proyecto Procesador de lotes de transacciones API

    saldoCuenta <- 5000.0
    totalDepositado <- 0.0
    totalRetirado <- 0.0
    exitosas <- 0
    rechazadas <- 0

    Repetir
        Escribir "--- PASARELA DE PAGOS API ---"
        Escribir "1. Procesar Transaccion"
        Escribir "0. Finalizar Lote y Salir"
        Escribir "Seleccione una opcion:"
        Leer opcionMenu

        Si opcionMenu = 1 Entonces
            Repetir
                Escribir "Ingrese tipo de transaccion (1: Deposito, 2: Retiro):"
                Leer tipoTransaccion
            Hasta Que tipoTransaccion = 1 O tipoTransaccion = 2

            Repetir
                Escribir "Ingrese el monto (debe ser mayor a 0):"
                Leer monto
            Hasta Que monto > 0.0

            Si tipoTransaccion = 1 Entonces
                saldoCuenta <- saldoCuenta + monto
                totalDepositado <- totalDepositado + monto
                exitosas <- exitosas + 1
                Escribir "Deposito exitoso."
            Sino
                Si monto <= saldoCuenta Entonces
                    saldoCuenta <- saldoCuenta - monto
                    totalRetirado <- totalRetirado + monto
                    exitosas <- exitosas + 1
                    Escribir "Retiro exitoso."
                Sino
                    Escribir "Alerta: Fondos Insuficientes."
                    rechazadas <- rechazadas + 1
                Fin Si
            Fin Si
        Fin Si

    Hasta Que opcionMenu = 0

    Escribir "=== RESUMEN DE AUDITORIA FINANCIERA ==="
    Escribir "Saldo Final: $", saldoCuenta
    Escribir "Total Depositado: $", totalDepositado
    Escribir "Total Retirado: $", totalRetirado
    Escribir "Operaciones Exitosas: ", exitosas
    Escribir "Operaciones Rechazadas: ", rechazadas

Fin Algoritmo