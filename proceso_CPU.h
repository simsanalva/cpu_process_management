
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

	struct nodo{
		string proceso;
		int prioridad;
	};
	void InsertarProceso();
	void OrdenarProcesos(nodo []);
	void Imprimir(nodo []);
	
	void InsertarProceso(){
		int i = 0;
		nodo Procesos[10];
		while(i < 10){
			cout << "\tINGRESE EL NOMBRE DEL PROCESO: ";
			cin >> Procesos[i].proceso;
			do{
				cout << "\tINGRESE LA PRIORIDAD DEL PROCESO: ";
				cin >> Procesos[i].prioridad;
			}while((Procesos[i].prioridad < 1) || (Procesos[i].prioridad > 5));
			i++;
		}
		OrdenarProcesos(Procesos);
	}
	void OrdenarProcesos(nodo Procesos[]){
		nodo aux;
		for (int i = 0; i < 10; i++){
			for(int j = i; j < 10; j++){
				if(Procesos[i].prioridad > Procesos[j].prioridad){
					aux = Procesos[i];
					Procesos[i] = Procesos[j];
					Procesos[j] = aux;
				}
			}	
		}
		Imprimir(Procesos);
	}
	void Imprimir(nodo process[]){
		for(int i = 0; i < 10; i++){
			cout << "\t==> " << i << endl;
			cout << "\tPROCESO: " << process[i].proceso << endl;
			cout << "\tPRIORIDAD: " << process[i].prioridad << endl;
			cout << "\t----------------------------------------" << endl;
		}
	}

