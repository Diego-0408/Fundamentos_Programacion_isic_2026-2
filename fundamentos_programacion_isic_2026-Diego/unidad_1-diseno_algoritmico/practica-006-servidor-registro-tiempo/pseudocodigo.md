Algoritmo: Servidor de registro de tiempo y desgloce de unidades
Escribir "Ingrese los segundos totales de su estancia en el servidor linux"
Leer segundosTotales

Asignacion -- Procesos
horas <- TRUNC (segundosTotales/3600)
segundosRestantes <- segundosTotales MOD 3600
minutos <- TRUNC (segunddosRestantes/60)
segundosFinales <- segundosRestantes MOD 60

Escribir "Su tiempo en el servidor Linux fue de: ", horas, " hora(s), ", minutos, " minuto(s) y ", segundosFinales, " segundo(s)."

Fin Algoritmo