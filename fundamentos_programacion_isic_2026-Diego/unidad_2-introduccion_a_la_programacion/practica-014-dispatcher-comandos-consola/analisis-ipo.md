# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Un intérprete de comandos simplificado de administración de servidores requiere ejecutar tareas específicas basándose en una opción numérica seleccionada por el usuario a través de un menú interactivo. Se solicita diseñar un algoritmo que evalúe la variable discreta `opcionMenu` mediante una estructura selectiva múltiple (`Según...Hacer`) para desplegar la acción correspondiente (Reiniciar servidor, Mostrar Estado, Limpiar caché o Cerrar sesión) e incluir una cláusula `De Otro Modo` para capturar opciones fuera del rango válido.

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `opcionMenu` (Entero) | **Según** `opcionMenu` **Hacer**<br>&nbsp;&nbsp;&nbsp;&nbsp;**Caso 1:** Mensaje = "Ejecutando: Reiniciar servidor..."<br>&nbsp;&nbsp;&nbsp;&nbsp;**Caso 2:** Mensaje = "Ejecutando: Mostrar Estado del servidor..."<br>&nbsp;&nbsp;&nbsp;&nbsp;**Caso 3:** Mensaje = "Ejecutando: Limpiar cache..."<br>&nbsp;&nbsp;&nbsp;&nbsp;**Caso 4:** Mensaje = "Ejecutando: Cerrar sesion..."<br>&nbsp;&nbsp;&nbsp;&nbsp;**De Otro Modo:** Mensaje = "Error: Opcion no valida..."<br>**FinSegún** | Mensaje de confirmación de la orden ejecutada o mensaje de error (Texto) |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Declarar la variable `opcionMenu` de tipo Entero.
3. Desplegar en pantalla el menú interactivo con las opciones numéricas del 1 al 4.
4. Capturar la opción elegida por el usuario.
5. Evaluar el valor de `opcionMenu` utilizando una estructura selectiva múltiple.
6. Ejecutar el caso correspondiente a la opción ingresada y mostrar el mensaje de confirmación de la acción simulada.
7. Si el número ingresado no coincide con ningún caso del menú (1 al 4), ejecutar el bloque alternativo para notificar que la opción no es válida.
8. Fin del algoritmo.