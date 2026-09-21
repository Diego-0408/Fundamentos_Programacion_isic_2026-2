# Tabla de Casos de Prueba

Se ejecutan escenificatorios para verificar la clasificación por rangos numéricos anidados.

| Caso | Valor de Entradas Ingresadas | Resultado Calculado / Esperado | Resultado Obtenido | Estatus (PASÓ / FALLÓ) |
| :---: | :--- | :--- | :--- | :---: |
| **1** | `numeroPuerto`: 80 | Prioridad Alta (Servicios del Sistema) | Prioridad Alta (Servicios del Sistema) | **PASÓ** |
| **2** | `numeroPuerto`: 8080 | Prioridad Media (Aplicaciones Registradas) | Prioridad Media (Aplicaciones Registradas) | **PASÓ** |
| **3** | `numeroPuerto`: 50000 | Prioridad Baja (Puertos Dinamicos/Privados) | Prioridad Baja (Puertos Dinamicos/Privados) | **PASÓ** |
| **4** | `numeroPuerto`: 70000 | Puerto Invalido | Puerto Invalido | **PASÓ** |

## Capturas de Pantalla de Ejecución

### Caso de Prueba 1
![Ejecución Caso 1](./Imagenes/caso1.png)

### Caso de Prueba 2
![Ejecución Caso 2](./Imagenes/caso2.png)

### Caso de Prueba 3
![Ejecución Caso 3](./Imagenes/caso3.png)

### Caso de Prueba 4
![Ejecución Caso 4](./Imagenes/caso4.png)