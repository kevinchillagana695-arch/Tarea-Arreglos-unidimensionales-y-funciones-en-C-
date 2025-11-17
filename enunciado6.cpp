//Chillagana Kevin
//Funciones con parámetros por valor.
//Enunciado 6: Escriba un programa que almacene varios números en un arreglo 
//y cuente cuales son pares.
#include <iostream>
using namespace std;

int numerosEnteros(int arreglo[],int tamano){
	int contador=0;
	
	for(int i=0;i<tamano;i++){
		if(arreglo[i]%2==0){//Revisa en el arreglo cuales son pares
			contador=contador+1;
		}
	}
	return contador;//cuenta los numeros pares
}

int main() {
	int numero[5];
	int numerosPares;
	for(int i=0;i<5;i++){
		cout<<"Ingrese numero "<<i+1<<":";
		cin>>numero[i];
	}
	numerosPares=numerosEnteros(numero,5);
	
	cout<<"Los numeros pares en el arreglo son:"<<numerosPares;
	
	return 0;
}
