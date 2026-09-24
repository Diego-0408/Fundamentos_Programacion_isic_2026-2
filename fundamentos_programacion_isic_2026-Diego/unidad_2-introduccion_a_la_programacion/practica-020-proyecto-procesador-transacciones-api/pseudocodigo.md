Algoritmo ProcesadorTransacciones

saldo = 5000.0
depTotal = 0.0
retTotal = 0.0
ok = 0
error = 0
opc = -1

Mientras opc != 0 Hacer
Escribir "1. Transaccion  0. Salir"
Leer opc

Si opc == 1 Entonces
tipo = 0
Mientras tipo != 1 Y tipo != 2 Hacer
Escribir "Tipo (1: Deposito, 2: Retiro):"
Leer tipo
FinMientras

monto = 0.0
Mientras monto <= 0 Hacer
Escribir "Monto:"
Leer monto
FinMientras

Si tipo == 1 Entonces
saldo = saldo + monto
depTotal = depTotal + monto
ok = ok + 1
Escribir "Deposito ok"
Sino
Si monto <= saldo Entonces
saldo = saldo - monto
retTotal = retTotal + monto
ok = ok + 1
Escribir "Retiro ok"
Sino
Escribir "Fondos Insuficientes"
error = error + 1
FinSi
FinSi
FinSi
FinMientras

Escribir "Saldo final: ", saldo
Escribir "Total dep: ", depTotal
Escribir "Total ret: ", retTotal
Escribir "Aprobadas: ", ok
Escribir "Rechazadas: ", error

FinAlgoritmo