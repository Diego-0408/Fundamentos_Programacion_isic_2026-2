# Tabla de Casos de Prueba

Se ejecutan 3 escenarios para evaluar la búsqueda secuencial con parada temprana (*Early Exit*) mediante un bucle `Mientras` sobre un rango de 10 PIDs simulados.

| Caso | Valor de Entrada (`pidBuscado`) | Resultado Calculado / Esperado | Resultado Obtenido | Estatus (PASÓ / FALLÓ) |
| :---: | :--- | :--- | :--- | :---: |
| **1** | `500` (PID existente en posición media) | '¡Proceso encontrado! El PID 500 está en la posición/intento: 3' | '¡Proceso encontrado! El PID 500 está en la posición/intento: 3' | **PASÓ** |
| **2** | `620` (PID existente al final, intento 10) | '¡Proceso encontrado! El PID 620 está en la posición/intento: 10' | '¡Proceso encontrado! El PID 620 está en la posición/intento: 10' | **PASÓ** |
| **3** | `9999` (PID inexistente - agota los 10) | 'Proceso no encontrado tras escanear los 10 procesos.' | 'Proceso no encontrado tras escanear los 10 procesos.' | **PASÓ** |

## Capturas de Pantalla de Ejecución

### Caso de Prueba 1
![Ejecución Caso 1](./Imagenes/caso1.png)

### Caso de Prueba 2
![Ejecución Caso 2](./Imagenes/caso2.png)

### Caso de Prueba 3
![Ejecución Caso 3](./Imagenes/caso3.png)