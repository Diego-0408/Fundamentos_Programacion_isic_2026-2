# Tabla de Casos de Prueba

Se ejecutan 3 escenarios diferentes para verificar la exactitud de las operaciones numéricas y las salidas lógicas.

| Caso | Valor de Entradas Ingresadas | Resultado Calculado / Esperado | Resultado Obtenido en DFD / PSeInt | Estatus (PASÓ / FALLÓ) |
| :--- | :--- | :--- | :--- | :--- |
| **1** | Entrada A: `peticionesIniciales = 5000` | Salida A: Simulación escalonada hasta superar 10,000 en 4 horas (aprox. 10368) | Salida A: Simulación escalonada hasta superar 10,000 en 4 horas | **PASÓ** |
| **2** | Entrada A: `peticionesIniciales = 8000` | Salida A: Saturación rápida superando 10,000 en 2 horas (9600 $\rightarrow$ 11520) | Salida A: Saturación rápida superando 10,000 en 2 horas | **PASÓ** |
| **3** | Entrada A: `peticionesIniciales = 12000` | Salida A: Activación inmediata de restricción por superar o igualar el límite inicial permitido | Salida A: Activación inmediata de restricción por superar o igualar el límite inicial permitido | **PASÓ** |

## Capturas de Pantalla de Ejecución
### Caso de Prueba 1
![Ejecución Caso 1](imagenes/caso1.png)

### Caso de Prueba 2
![Ejecución Caso 2](imagenes/caso2.png)

### Caso de Prueba 3
![Ejecución Caso 3](imagenes/caso3.png)