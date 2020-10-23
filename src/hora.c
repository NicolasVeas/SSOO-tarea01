#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

void my_handler(int senal);

int main(int argc, char* argv[]){

	// "my_handler" es el manejador de señales, es decir en el controlamos la señal
	
	
	printf("Programa hora ejecutandose. PID=%d.\n",getpid()); //imprime el proceso actual
	printf("Listo para recibir la señal SIGUSR1.\n"); //imprime que estamos listo para recibir una señal
	signal(SIGINT,my_handler);
		
	for(int i=1;;i++){ //bucle infinito con un sleep de 1 segundo para evitar consumir recursos y esperar una señal
		signal(SIGUSR1, my_handler); //registra el manejador de señales --> SIGUSR1
		
		
		
		sleep(1); 
	}
	
	return 0;
}


void my_handler(int senal){ //en esta funcion es para controlar las señales y segun la señal q se recibe ejecutar una accion especifica, se llama manejador de señales
	
	//variables para obtener la hora del sistema
	time_t rawtime;
	time(&rawtime);
			

	if(senal == SIGUSR1){ //si llega una señal de tipo sigusr1, imprime la hora actual del sistema
		printf("Señal SIGUSR1 recibida: %s \n",ctime (&rawtime));
		printf("Listo para recibir la señal SIGUSR1.\n"); //imprime que estamos listo para recibir una señal
	}else if(senal == SIGINT){
		signal(SIGINT,SIG_DFL);	
	}
	
}



