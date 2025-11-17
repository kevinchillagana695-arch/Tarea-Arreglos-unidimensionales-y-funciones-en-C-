//Chillagana Kevin
//Ejercicio con return (función que devuelve un valor)
//Enunciado 8: Realice un programa que calcule y retorne el 
//promedio de los elementos de un arreglo.
#include <iostream>
#include <iomanip>
using namespace std;

double promedio(int arreglo[],int tamano){
	int suma=0;
	for(int i=0;i<tamano;i++){//Recorre el arreglo y suma los numeros.
		suma+=arreglo[i];
	}
	return double(suma)/tamano;//calcula el pomedio del arreglo
}

int main() {
	int numeros[5];
	double promediototal;
	
	for(int i=0;i<5;i++){// Ingresamos los 5 numeros 
		cout<<"Ingrese 5 numeros:";
		cin>>numeros[i];	
	}
	promediototal=promedio(numeros,5);
	cout << fixed << setprecision(2);//
	cout<<"El promedio es "<<promediototal;
	return 0;
}
