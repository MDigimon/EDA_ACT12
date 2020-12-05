#ifndef Clases
#define Clases

#include <iostream>

using namespace std;

template <class T>
class Arreglo{
	private:
		T *arreglo;
		size_t tam;
		size_t cont;
		const static size_t MAX = 5;
	public:
		Arreglo();
		~Arreglo();
		void insertar_inicio(const T& s);
		void insertar_final(const T& s);
		void expandir();
		size_t size();
		
		string operator[](size_t p){
			return arreglo[p];
		}
};

template<class T>
Arreglo<T>::Arreglo(){
	arreglo = new T[MAX];
	cont = 0;
	tam = MAX;
}

template<class T>
Arreglo<T>::~Arreglo(){
	delete[] arreglo;
}

template<class T>
void Arreglo<T>::insertar_final(const T& s){
	if(cont == tam){
		expandir();
	}
	arreglo[cont] = s;
	cont++;
}

template<class T>
void Arreglo<T>::insertar_inicio(const T& s){
	if(cont == tam){
		expandir();
	}
	for(size_t i=cont; i>0; i--){
		arreglo[i] = arreglo[i-1];
	}
	arreglo[0] = s;
	cont++;
}

template<class T>
void Arreglo<T>::expandir(){
	T *nuevo = new T[tam+MAX];
	
	for(size_t i=0; i<tam; i++){
		nuevo[i] = arreglo[i];
		
	}
	delete[] arreglo;
	arreglo = nuevo;
	tam = tam + MAX;
}

template<class T>
size_t Arreglo<T>::size(){
	return cont;
}


#endif
