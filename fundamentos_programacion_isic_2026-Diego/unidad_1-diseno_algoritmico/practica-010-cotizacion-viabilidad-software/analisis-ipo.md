# Análisis Entrada-Proceso-Salida (IPO)

## 1. Planteamiento del Problema
Una consultora de software requiere estimar el presupuesto integral y evaluar la viabilidad de aprobación de proyectos sin el uso de estructuras de control condicionales. El algoritmo debe recibir los requerimientos del cliente, aplicar porcentajes acumulativos de gastos operativos (12%), descuentos por convenio (5%) e impuestos (IVA 16%), desglosar la carga de trabajo en semanas, días y horas laborales, y determinar la viabilidad financiera y de tiempo para emitir un dictamen booleano final de aprobación.

## 2. Tabla Entrada-Proceso-Salida

| Entradas | Procesos / Fórmulas | Salidas |
| :--- | :--- | :--- |
| `nombreProyecto` (Texto)<br>`horasDesarrollo` (Entero)<br>`costoHora` (Real)<br>`presupuestoCliente` (Real)<br>`plazoClienteDias` (Entero) | `JORNADA_DIARIA` = 8, `DIAS_SEMANA` = 5<br>`subtotalManoObra` = `horasDesarrollo` * `costoHora`<br>`gastosOperativos` = `subtotalManoObra` * 0.12<br>`descuentoConvenio` = `subtotalManoObra` * 0.05<br>`costoTotalNeto` = `subtotalManoObra` + `gastosOperativos` - `descuentoConvenio`<br>`costoIVA` = `costoTotalNeto` * 0.16<br>`granCostoTotal` = `costoTotalNeto` + `costoIVA`<br>`diasTotales` = TRUNC(`horasDesarrollo` / `JORNADA_DIARIA`)<br>`horasRestantes` = `horasDesarrollo` mod `JORNADA_DIARIA`<br>`semanasLaborales` = TRUNC(`diasTotales` / `DIAS_SEMANA`)<br>`presupuestoViable` = (`granCostoTotal` <= `presupuestoCliente`)<br>`plazoViable` = (`diasTotales` <= `plazoClienteDias`)<br>`proyectoAprobado` = `presupuestoViable` Y `plazoViable` | `nombreProyecto` (Texto)<br>`granCostoTotal` (Real)<br>`semanasLaborales` (Entero)<br>`diasTotales` (Entero)<br>`horasRestantes` (Entero)<br>`presupuestoViable` (Booleano)<br>`plazoViable` (Booleano)<br>`proyectoAprobado` (Booleano) |

## 3. Algoritmo en Lenguaje Natural
1. Inicio del algoritmo.
2. Definir las constantes de jornada laboral (`JORNADA_DIARIA` = 8, `DIAS_SEMANA` = 5).
3. Solicitar y capturar los datos de entrada del proyecto (nombre, horas estimadas, costo por hora, presupuesto del cliente y plazo en días).
4. Calcular el subtotal de mano de obra y aplicar los porcentajes correspondientes a gastos operativos, descuento por convenio e IVA para obtener el gran costo total.
5. Descomponer el tiempo de desarrollo en semanas laborales completas, días totales requeridos y horas restantes utilizando truncamiento y residuo de división.
6. Evaluar mediante operaciones relacionales directas si el costo total respeta el presupuesto del cliente y si los días requeridos están dentro del plazo tolerado.
7. Determinar la aprobación final del proyecto mediante la conjunción lógica (`Y`) de la viabilidad de presupuesto y plazo.
8. Desplegar en una sola pantalla de salida el informe financiero, el desglose de entregables y los dictámenes booleanos de aprobación.
9. Fin del algoritmo.