# Tarea 1 SISTEMA OPERATIVO
###### --> @AUTOR: Nicolás Veas Gallardo - nicolas.veas@alumnos.uv.cl

## Diseño de solución

Una vez ejecutado el programa tendra un proceso en el cual estara en espera mediante un ciclo for infinito con un sleep para no consumir recursos del computador. La señal de espera debe ser si o si de numero SIGUSR1 mediante el comando kill -s por otra terminal, una vez recibida la señal de numero SIGUSR1 imprimira la hora actual del sistema. Para finalizar el programa y salir del proceso se debe presionar dos veces la combinacion CTRL+C en la primera terminar.

##  Funciones


