Algoritmo: Recepcion de archivo por fragmentos (Streaming)

Escribir "Ingrese el tamaño total del archivo en MB:"
Leer tamanoTotal

remanente <- tamanoTotal

Mientras remanente > 0 Hacer

Escribir "Ingrese el tamaño del fragmento recibido (MB):"
Leer tamanoChunk

Si tamanoChunk > remanente Entonces
remanente <- 0
Sino
remanente <- remanente - tamanoChunk
FinSi

Escribir "Remanente restante por descargar:"
Escribir remanente

FinMientras

Escribir "¡Descarga finalizada con éxito!"

Fin Algoritmo