# Tabla de Casos de Prueba

Se ejecutan 3 escenarios diferentes para verificar la exactitud de las operaciones numéricas y las salidas lógicas.

| Caso | Valor de Entradas Ingresadas | Resultado Calculado / Esperado | Resultado Obtenido en DFD / PSeInt | Estatus (PASÓ / FALLÓ) |
| :--- | :--- | :--- | :--- | :--- |
| **1** | Entrada A: `tamanoTotal = 50`<br>Entrada B: `tamanoChunk = 20, 30`[cite: 3] | Salida A: Remanente intermedio `30`<br>Salida B: Remanente final `0` y mensaje de éxito[cite: 3] | Salida A: Remanente intermedio `30`<br>Salida B: Remanente final `0` y mensaje de éxito[cite: 3] | **PASÓ** |
| **2** | Entrada A: `tamanoTotal = 40`<br>Entrada B: `tamanoChunk = 25, 30`[cite: 3] | Salida A: Remanente intermedio `15`<br>Salida B: Remanente ajustado `0` por restricción[cite: 3] | Salida A: Remanente intermedio `15`<br>Salida B: Remanente ajustado `0` por restricción[cite: 3] | **PASÓ** |
| **3** | Entrada A: `tamanoTotal = 100`<br>Entrada B: `tamanoChunk = 100` | Salida A: Remanente final directo `0`<br>Salida B: Cierre inmediato del bucle y éxito | Salida A: Remanente final directo `0`<br>Salida B: Cierre inmediato del bucle y éxito | **PASÓ** |

## Capturas de Pantalla de Ejecución
### Caso de Prueba 1
![Ejecución Caso 1](imagenes/caso1.png)

### Caso de Prueba 2
![Ejecución Caso 2](imagenes/caso2.png)

### Caso de Prueba 3
![Ejecución Caso 3](imagenes/caso3.png)