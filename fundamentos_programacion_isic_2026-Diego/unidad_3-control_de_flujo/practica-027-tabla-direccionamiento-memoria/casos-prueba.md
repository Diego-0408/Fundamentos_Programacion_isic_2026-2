# Tabla de Casos de Prueba

Se ejecutan 3 escenarios diferentes para verificar la exactitud de las operaciones numéricas y las salidas lógicas.

| Caso | Valor de Entradas Ingresadas | Resultado Calculado / Esperado | Resultado Obtenido en DFD / PSeInt | Estatus (PASÓ / FALLÓ) |
| :--- | :--- | :--- | :--- | :--- |
| **1** | Entrada A: `maxBits = 3`[cite: 5] | Salida A: Generación de potencias para $i = 0, 1, 2, 3$ ($1, 2, 4, 8$)[cite: 5] | Salida A: Generación de potencias para $i = 0, 1, 2, 3$ ($1, 2, 4, 8$)[cite: 5] | **PASÓ** |
| **2** | Entrada A: `maxBits = 16`[cite: 5] | Salida A: Ejecución límite válida hasta $2^{16} = 65536$[cite: 5] | Salida A: Ejecución límite válida hasta $2^{16} = 65536$[cite: 5] | **PASÓ** |
| **3** | Entrada A: `maxBits = 18` | Salida A: Activación de restricción por superar 16 bits y mensaje de error | Salida A: Activación de restricción por superar 16 bits y mensaje de error | **PASÓ** |

## Capturas de Pantalla de Ejecución
### Caso de Prueba 1
![Ejecución Caso 1](imagenes/caso1.png)

### Caso de Prueba 2
![Ejecución Caso 2](imagenes/caso2.png)

### Caso de Prueba 3
![Ejecución Caso 3](imagenes/caso3.png)