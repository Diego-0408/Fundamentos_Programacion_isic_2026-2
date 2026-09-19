Algoritmo: Calculadore de promedio ponderado de asignaturas de sistemas 
Escribir "Programa para calcular el promedio final de alumnos (Ingrese la calificacion de cada rubro en una escala de 0 a 100)"
Escribir "Ingrese la nota obtenida en los examenes"
leer notaExamenes
Escribir "Ingrese la nota obtenida en las practicas de laboratorio"
leer notaPracticas
Escribir "Ingrese la nota obtenida en el proyecto integrador"
leer notaProyecto
Escribir "Ingrese la nota obtenida en la autoevaluacion y tareas"
leer notaTareas

Asignacion - Procesos
  promedioPonderado <- (notaExamenes * 0.40) + (notaPracticas * 0.30) + (notaProyecto * 0.20) + (notaTareas * 0.10)

Escribir "Promedio ponderado final obtenido: ",promedioPonderado

Fin Algoritmo