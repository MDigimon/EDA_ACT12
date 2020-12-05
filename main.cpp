#include <iostream>
#include <stdlib.h>

#include "Clases.h"

using namespace std;

int main() {
	string dato, opc;
	int f=1;
	Arreglo<string> arr;
	while(f == 1){
		cout << "1.- Agregar Elemento al Inicio" << endl;
		cout << "2.- Agregar Elemento al Final" << endl;
		cout << "3.- Numero de Elementos" << endl;
		cout << "4.- Imprimir Elementos" << endl;
		cout << "0.- Salir" << endl;
		getline(cin, opc);
		fflush(stdin);
		
		if(opc == "1"){
			cout << "Dato: " ;
			getline(cin, dato);
			fflush(stdin);
			arr.insertar_inicio(dato);
		}
		else if(opc == "2"){
			cout << "Dato: " ;
			getline(cin, dato);
			fflush(stdin);
			arr.insertar_final(dato);
		}
		else if(opc == "3"){
			cout << "Numero de Elementos: " << arr.size() << endl;
			system("pause");
		}
		else if(opc == "4"){
			for(size_t i=0; i < arr.size(); i++){
				cout << "Dato " << i+1 << ": " << arr[i] << endl;
			}
			system("pause");
		}
		else if(opc == "0"){
			cout << "FIN DEL PROGRAMA" << endl;
			f = 0;
		}
		else{
			cout << "DATO INCORRECTO" << endl;
		}

		cout << endl;
		if(f == 1){
			system("cls");
		}
	}
	
	return 0;
}
