# Tabla de Casos de Prueba

Se ejecutan 3 escenarios diferentes para verificar la exactitud de las operaciones numéricas y las salidas lógicas.

| Caso | Valor de Entradas Ingresadas | Resultado Calculado / Esperado | Resultado Obtenido | Estatus (PASÓ / FALLÓ) |
| :---: | :--- | :--- | :--- | :---: |
| **1** | `nombreProyecto`: SaaS CRM<br>`horasDesarrollo`: 40<br>`costoHora`: 100<br>`presupuestoCliente`: 6000<br>`plazoClienteDias`: 10 | Gran Total: $4779.20<br>Tiempo: 1 sem, 5 dias, 0 hrs<br>Aprobado: VERDADERO | Gran Total: $4779.20 \| Tiempo: 1 sem, 5 dias, 0 hrs \| Aprobado: VERDADERO | **PASÓ** |
| **2** | `nombreProyecto`: App Movil<br>`horasDesarrollo`: 100<br>`costoHora`: 100<br>`presupuestoCliente`: 10000<br>`plazoClienteDias`: 20 | Gran Total: $11948.00<br>Tiempo: 2 sem, 12 dias, 4 hrs<br>Aprobado: FALSO | Gran Total: $11948.00 \| Tiempo: 2 sem, 12 dias, 4 hrs \| Aprobado: FALSO | **PASÓ** |
| **3** | `nombreProyecto`: E-commerce<br>`horasDesarrollo`: 80<br>`costoHora`: 50<br>`presupuestoCliente`: 6000<br>`plazoClienteDias`: 5 | Gran Total: $4779.20<br>Tiempo: 2 sem, 10 dias, 0 hrs<br>Aprobado: FALSO | Gran Total: $4779.20 \| Tiempo: 2 sem, 10 dias, 0 hrs \| Aprobado: FALSO | **PASÓ** |

## Capturas de Pantalla de Ejecución

### Caso de Prueba 1
![Ejecución Caso 1](./Imagenes/caso1.png)

### Caso de Prueba 2
![Ejecución Caso 2](./Imagenes/caso2.png)

### Caso de Prueba 3
![Ejecución Caso 3](./Imagenes/caso3.png)