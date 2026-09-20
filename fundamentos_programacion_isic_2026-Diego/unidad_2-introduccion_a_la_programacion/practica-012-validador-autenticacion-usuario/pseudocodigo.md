Algoritmo: Validador de autenticacion de usuario
Asignacion
PIN-CORRECTO <- 4321
Escribir "Sistema de validacion--Ingrese su pin de 4 digitos"
Leer pinIngresado

Decision
  Si (pinIngresado = PIN_CORRECTO)
  Entonces Escribir "Acceso Concedido"
  Sino 
  Escribir "Acceso denegado: PIN Incorrecto"
Fin Algoritmo