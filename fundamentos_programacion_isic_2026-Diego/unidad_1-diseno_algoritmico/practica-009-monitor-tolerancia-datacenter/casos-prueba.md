# Tabla de Casos de Prueba

Se ejecutan 3 escenarios diferentes para verificar la exactitud de las operaciones numéricas y las salidas lógicas.

| Caso | Valor de Entradas Ingresadas | Resultado Calculado / Esperado | Resultado Obtenido | Estatus (PASÓ / FALLÓ) |
| :---: | :--- | :--- | :--- | :---: |
| **1** | `temperatura`: 20.0<br>`humedad`: 50.0 | Normativa: VERDADERO<br>Alerta Riesgo: FALSO | Normativa: VERDADERO \| Alerta Riesgo: FALSO | **PASÓ** |
| **2** | `temperatura`: 26.0<br>`humedad`: 50.0 | Normativa: FALSO<br>Alerta Riesgo: VERDADERO | Normativa: FALSO \| Alerta Riesgo: VERDADERO | **PASÓ** |
| **3** | `temperatura`: 20.0<br>`humedad`: 70.0 | Normativa: FALSO<br>Alerta Riesgo: VERDADERO | Normativa: FALSO \| Alerta Riesgo: VERDADERO | **PASÓ** |

## Capturas de Pantalla de Ejecución

### Caso de Prueba 1
![Ejecución Caso 1](./Imagenes/caso1.png)

### Caso de Prueba 2
![Ejecución Caso 2](./Imagenes/caso2.png)

### Caso de Prueba 3
![Ejecución Caso 3](./Imagenes/caso3.png)