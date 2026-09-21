Algoritmo Dispatcher de comandos de consola CLI
Escribir "--Ingrese el numero de la accion que desee realizar--"
Escribir "1. Reinicar servidor,2. Mostrar Estado, 3. Limpiar cache, 4. Cerrar sesion."
Leer opcionMenu

Según opcionMenu Hacer
    1:
        Escribir "Reiniciando servidor..."
    2:
        Escribir "Mostrando estado..."
    3:
        Escribir "Limpiando Caché..."
    4:
        Escribir "Cerrando Sesión..."
    De Otro Modo:
        Escribir "Opción no válida"
FinSegún
Fin Algoritmo