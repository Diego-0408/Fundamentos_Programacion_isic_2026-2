# Tabla de Casos de Prueba

Se ejecutan 3 escenarios diferentes para verificar la exactitud de la captura de datos y el despliegue de la ficha escolar.

| Caso | Valor de Entradas Ingresadas | Resultado Calculado / Esperado | Resultado Obtenido en PSeInt / DFD | Estatus (PASÓ / FALLÓ) |
| :---: | :--- | :--- | :--- | :---: |
| **1** | `numeroControl`: 260112001<br>`nombreCompleto`: 'Miguel Castro'<br>`promedioPrepa`: 9<br>`estatusDocumentos`: 'Si' | Salida A: No.control: 260112001<br>Salida B: Nombre: Miguel Castro<br>Salida C: Promedio: 9<br>Salida D: Estatus Docs: Si | Salida A: No.control: 260112001<br>Salida B: Nombre: Miguel Castro<br>Salida C: Promedio: 9<br>Salida D: Estatus Docs: Si | **PASÓ** |
| **2** | `numeroControl`: 260112002<br>`nombreCompleto`: 'Daniela Aguilera'<br>`promedioPrepa`: 10<br>`estatusDocumentos`: 'Si' | Salida A: No.control: 260112002<br>Salida B: Nombre: Daniela Aguilera<br>Salida C: Promedio: 10<br>Salida D: Estatus Docs: Si | Salida A: No.control: 260112002<br>Salida B: Nombre: Daniela Aguilera<br>Salida C: Promedio: 10<br>Salida D: Estatus Docs: Si | **PASÓ** |
| **3** | `numeroControl`: 260112003<br>`nombreCompleto`: 'Elvis Bautista'<br>`promedioPrepa`: 7<br>`estatusDocumentos`: 'No' | Salida A: No.control: 260112003<br>Salida B: Nombre: Elvis Bautista<br>Salida C: Promedio: 7<br>Salida D: Estatus Docs: No | Salida A: No.control: 260112003<br>Salida B: Nombre: Elvis Bautista<br>Salida C: Promedio: 7<br>Salida D: Estatus Docs: No | **PASÓ** |

## Capturas de Pantalla de Ejecución

### Caso de Prueba 1
![Ejecución Caso 1](./imagenes/caso1.png)

### Caso de Prueba 2
![Ejecución Caso 2](./imagenes/caso2.png)

### Caso de Prueba 3
![Ejecución Caso 3](./imagenes/caso3.png)