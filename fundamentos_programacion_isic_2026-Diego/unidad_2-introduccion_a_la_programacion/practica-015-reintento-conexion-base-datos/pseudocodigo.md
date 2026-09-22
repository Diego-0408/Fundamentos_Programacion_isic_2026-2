Algoritmo: Reintento deconexion a base de datos

Asignar 
intento <- 1
estadoConexion <- "FALSO"
PASSWORD_USUARIO <- "dbpass123"

Mientras intento <= 3 Y estadoConexion = "FALSO" Hacer
  Escribir "Ingrese su contraseña"
  Leer passwordIngresada
Si passwordIngresada = PASSWORD_USUARIO Entonces
  estadoConexion <- "VERDADERO"
Sino
  intento <- intento + 1
Fin Si
Fin mientras

Si estadoConexion <- "Verdadero" Entonces
  Escribir "Conexion exitosa"
Sino 
  Escribir "Conexion Fallida: Se agotaron los 3 intentos"
Fin Si

Fin Algoritmo