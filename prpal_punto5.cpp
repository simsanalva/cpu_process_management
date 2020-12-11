/*Se desea implementar una estructura de datos que permita gestionar las tareas que se ejecutan
en una CPU multitarea. Dentro del conjunto de tareas se pueden diferenciar cinco niveles de
prioridad, de 1 a 5, siendo el nivel más prioritario el 1. Cuando hay tareas de nivel 1 éstas serán
las primeras en ejecutarse, si no hay de este nivel se ejecutarán las de nivel 2 y así
sucesivamente hasta que no haya tareas. El orden de ejecución dentro de un mismo nivel de
prioridades es por orden de llegada. Realizar un programa que simule la selección de tareas de la
CPU, seleccione las estructuras a utilizar acorde al planteamiento.*/

#include "proceso_CPU.h"

int main(){
	InsertarProceso();
	return 0;
}
