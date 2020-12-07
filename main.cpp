#include <iostream>
#include <stdlib.h>

#include "Clases.h"

using namespace std;

int main() {
	string dato, opc, num;
	int f=1, g;
	Arreglo<string> arr;
	while(f == 1){
		cout << "1.- Agregar Elemento al Inicio" << endl;
		cout << "2.- Agregar Elemento al Final" << endl;
		cout << "3.- Agregar Elemento en una Posicion" << endl;
		cout << "4.- Eliminar Elemento al Inicio" << endl;
		cout << "5.- Eliminar Elemento al Final" << endl;
		cout << "6.- Eliminar Elemento en una Posicion" << endl;
		cout << "7.- Numero de Elementos" << endl;
		cout << "8.- Imprimir Elementos" << endl;
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
			cout << "Dato: " ;
			getline(cin, dato);
			fflush(stdin);
			cout << "Posicion: " ;
			getline(cin, num);
			g=1;
			for(size_t i=0; i<num.size(); i++){
				if(isdigit(num[i]) == 0){
					if(num[i] != 0){
						cout << "Posicion Invalida" << endl;
						system("pause");
						break;
						g = 0;
					}
				}
			}
			if(g == 1){
				arr.insertar(dato, stoi(num));
			}
			
		}
		else if(opc == "4"){
			arr.eliminar_inicio();
			system("pause");
		}
		else if(opc == "5"){
			arr.eliminar_final();
			system("pause");
		}
		else if(opc == "6"){
			cout << "Posicion: " ;
			getline(cin, num);
			g=1;
			for(size_t i=0; i<num.size(); i++){
				if(isdigit(num[i]) == 0){
					if(num[i] != 0){
						cout << "Posicion Invalida" << endl;
						system("pause");
						break;
						g = 0;
					}
				}
			}
			if(g == 1){
				arr.eliminar(stoi(num));
				system("pause");
			}
		}
		else if(opc == "7"){
			cout << "Numero de Elementos: " << arr.size() << endl;
			system("pause");
		}
		else if(opc == "8"){
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
