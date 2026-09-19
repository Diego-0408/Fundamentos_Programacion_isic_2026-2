Algoritmo: Punto de venta de equipo Tecnologico
Escribir "Ingrese el precio del producto 1"
Leer precioProd1 (Real)
Escribir "Ingrese el precio del producto 2"
Leer precioProd2 (Real)
Escribir "Ingrese el precio del producto 3"
Leer precioProd3 (Real)

Asignacion - Procesos
  costoEnvio <- 150.00
  subtototal <- precioProd1 + precioProd2 + precioProd3
  montoIVA   <- subtotal * 0.16
  totalFinal <- subtotal + montoIVA + costoEnvio

Escribir "Subtotal: $", subtotal, " | IVA: $", montoIVA, " | Costo de Envío: $", costoEnvio, " | Total a Pagar: $", totalFinal
Fin Algoritmo