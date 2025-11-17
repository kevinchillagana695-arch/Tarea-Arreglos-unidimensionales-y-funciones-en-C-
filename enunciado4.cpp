//Chillagana Kevin
//Funciones con parámetros por valor.
//Enunciado 4: Escriba un programa que almacene varios números en un arreglo 
//y identifique cual es mayor.
#include <iostream>
using namespace std;

void numeroMayor(int arreglo[],int tamano,int &mayor){
	mayor=arreglo[0];//tomamos como referencia el primer valor del arreglo.
	//Recorremos el arreglo en busca del numero mayor
	for(int i=0;i<tamano;i++){
		if(arreglo[i]>mayor){
			mayor=arreglo[i];
		}
	
	}
	
}
int main() {
	int numero[5];
	int valorMayor;
	for(int i=0;i<5;i++){//Ingresamos los numeros.
		cout<<"Ingrese los numeros:";
		cin>>numero[i];
	}
	
	numeroMayor(numero,5,valorMayor);//Llamamos a la funcion.
	cout<<"El numero mayor es:"<<valorMayor;
	
	return 0;
}
