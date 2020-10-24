# Tarea 1 SISTEMA OPERATIVO
###### --> @AUTOR: Nicolás Veas Gallardo - nicolas.veas@alumnos.uv.cl

## Diseño de solución

Una vez ejecutado el programa tendra un proceso en el cual estara en espera mediante un ciclo for infinito con un sleep para no consumir recursos del computador. La señal de espera debe ser si o si de numero SIGUSR1 mediante el comando kill -s por otra terminal, una vez recibida la señal de numero SIGUSR1 imprimira la hora actual del sistema. Para finalizar el programa y salir del proceso se debe presionar dos veces la combinacion CTRL+C en la primera terminar.

##  Funciones

##### int main (); 
Dentro de la funcion principal main, se imprime el proceso actual, luego usamos la funcion signal(SIGUSR1) dentro del for infinito que contiene un sleep() y signal(SIGINT) fuera del for

#### -> signal(int señal, contralador de señales): 
esta señal recibe como parametros dos variables, la primera es una señal de cualquier tipo, y la segunda lo envia al controlador de        																							 señales que es la funcion void my_handler(). al llamar esta funcion queda en espera de la señal pasada en parametros.

#### -> sleep(int num): 
Permite hacer una pausa por una determinada cantidad de segundos en la ejecución de un programa.

##### -> void my_handler(int senal): 
Esta controla la señales que estan en espera, si una señal no se encuentra dentro de esta funcion no sera controlada, aca controlamos las señales de numero SIGUSR1 y SIGINT, la primera al ser llamada imprime la hora actual del sistema, la ultima es para salir con CTRL+C del programa.

## Librerias

#### time.h

Esta Contiene funciones para manipular y formatear la fecha y hora del sistema.

#### signal.h

Esta Contiene funciones para especificar como un programa maneja señales mientras se ejecuta.

