Algoritmo: Integrador: Calculadora presupuestal y aprobacion de proyecto de software
Escribir "Ingrese el nombre del proyecto"
Leer nombreProyecto
Escribir "Ingrese las horas totales de desarrollo estimadas"
Leer horasDesarrollo
Escribir "Ingrese el costo por hora"
Leer costoHora
Escribir "Ingrese el presupuesto maximo del cliente"
Leer presupuestoCliente 
Escribir "Ingrese el plazo maximo tolerado por el cliente (En numero de dias)"
plazoClienteDias

Asignacion - Procesos
JORNADA_DIARIA <- 8 //Horas
DIAS_SEMANA <- 5 //Dias
subtotalManoObra <- (horasDesarrollo * costoHora)
gastosOperativos <- (subtotalManoObra * 0.12)
descuentoConvenio <- (subtotalManoObra * 0.05)
costoTotalNeto <- (subtotalManoObra + gastosOperativos - descuentoConvenio)
costoIVA <- (costoTotalNeto * 0.16)
granCostoTotal (costoTotalNeto + costo IVA)

//Desgloce de tiempo
diasTotales <- (TRUNC(horasDesarrollo/JORNADA_DIARIA))
horasRestantes <- MOD(horasDesarrollo,JORNADA_DIARIA)
semanasLaborales <- (TRUNC(diasTotales/DIAS_SEMANA))

//Evaluacion booleana
presupuestoViable <- (granCostoTotal <= presupuestoCliente)
plazoViable <- (diasTotales <= plazoClienteDias)
proyectoAprobado <- presupuestoViable Y plazoViable

Escribir "INFORME DEL PROYECTO: ", nombreProyecto, " --- | Gran Total a Cobrar: $", granCostoTotal, " | Desglose de Tiempo: ", semanasLaborales, " semana(s), ", diasTotales, " dia(s) y ", horasRestantes, " hora(s) | DICTAMEN: Presupuesto Viable = ", presupuestoViable, " | Plazo Viable = ", plazoViable, " | PROYECTO APROBADO = ", proyectoAprobado
Fin Algoritmo