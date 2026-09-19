# Tabla de Casos de Prueba

Se ejecutan 3 escenarios diferentes para verificar la exactitud de las operaciones numéricas y las salidas lógicas.

| Caso | Valor de Entradas Ingresadas | Resultado Calculado / Esperado | Resultado Obtenido | Estatus (PASÓ / FALLÓ) |
| :---: | :--- | :--- | :--- | :---: |
| **1** | `capacidadGB`: 1 | MB: 1,024<br>KB: 1,048,576<br>TB: 0.0009765625 | MB: 1024<br>KB: 1048576<br>TB: 0.0009765625 | **PASÓ** |
| **2** | `capacidadGB`: 1000 | MB: 1,024,000<br>KB: 1,048,576,000<br>TB: 0.9765625 | MB: 1024000<br>KB: 1048576000<br>TB: 0.9765625 | **PASÓ** |
| **3** | `capacidadGB`: 2048 | MB: 2,097,152<br>KB: 2,147,483,648<br>TB: 2 | MB: 2097152<br>KB: 2147483648<br>TB: 2 | **PASÓ** |

## Capturas de Pantalla de Ejecución

### Caso de Prueba 1
![Ejecución Caso 1](./Imagenes/caso1.jpeg)

### Caso de Prueba 2
![Ejecución Caso 2](./Imagenes/caso2.jpeg)

### Caso de Prueba 3
![Ejecución Caso 3](./Imagenes/caso3.jpeg)