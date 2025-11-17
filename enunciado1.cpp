
//Chillagana Kevin
//Funciones con void (sin retorno)
//Enunciado1:ingresar cinco números enteros en un arreglo unidimensional.


#include<iostream>
using namespace std;
void numerosEnteros(int arreglo[],int tamano ){//Recorre el arreglo 
	cout<<"Los numeros ingresasos son: ";
	for(int i=0;i<tamano;i++){
		cout<<arreglo[i]<<" ";
	}
	cout << endl;
}
int main(){
	int numero[5];
	for(int i=0;i<5;i++){//Ingresar los numeros del arreglo
		cout<<"Ingrese 5 numeros enteros:";
		cin>>numero[i];
	}
	numerosEnteros(numero, 5);
    return 0;
}
