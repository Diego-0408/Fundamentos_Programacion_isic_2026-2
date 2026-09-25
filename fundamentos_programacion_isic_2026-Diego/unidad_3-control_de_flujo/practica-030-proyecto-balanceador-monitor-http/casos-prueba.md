# Tabla de Casos de Prueba

| Caso | Entradas Ingresadas | Resultado Esperado | Estatus |
| :--- | :--- | :--- | :--- |
| **1** | $N = 1$, Peticiones: `20`, `10`, `0` | Acepta ambas, total 30 MB procesados. | **PASÓ** |
| **2** | $N = 1$, Peticiones: `30`, `30` (rechazada), `0` | Rechaza la segunda por superar 50 MB, total 30 MB. | **PASÓ** |
| **3** | $N = 1$, Peticiones: `0` | Servidor vacío, total 0 MB procesados. | **PASÓ** |

## Capturas de Pantalla
### Caso de Prueba 1
![Ejecución Caso 1](imagenes/caso1.png)
### Caso de Prueba 2
![Ejecución Caso 2](imagenes/caso2.png)
### Caso de Prueba 3
![Ejecución Caso 3](imagenes/caso3.png)