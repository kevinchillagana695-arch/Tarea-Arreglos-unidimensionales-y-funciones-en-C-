//Chillagana Kevin
//Funciones con parámetros por referencia
//Enunciado3:Leer los elementos de un arreglo y sumar y eliminar.
#include <iostream>
using namespace std;
//Calcular la suma en el arreglo,
void sumaNumeros(int arreglo[],int tamano,int &suma){
    suma=0;
	for(int i=0;i<tamano;i++){
		suma+=arreglo[i];
	}
}
//Eliminar un numero del arreglo
void eliminar(int arreglo[],int tamano,int numeroEliminar){
	for(int i=0;i<tamano;i++){
		if(arreglo[i]==numeroEliminar){
			arreglo[i]=0;
		}
	}
}
//Mostar arreglo actualizado
void mostrarArreglo(int arreglo[], int tamano) {
    cout << "Arreglo actual: ";
    for (int i = 0; i < tamano; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main() {
	int numero[5];
	int suma=0;
	int numeroEliminar;
	for(int i=0;i<5;i++){//Numeros ingresados
		cout<<"Ingrese el numero:";
		cin>>numero[i];	
	}
	sumaNumeros(numero,5,suma);
	cout<<"La suma de los numeros es :"<<suma<<endl;//Suma del arreglo.
	
	cout<<"Ingrese el numero a eliminar:";
	cin>>numeroEliminar;	
	eliminar(numero, 5, numeroEliminar);       // eliminar el número
	mostrarArreglo(numero, 5);                 // mostrar arreglo on el numero eliminado
	sumaNumeros(numero, 5, suma);             // Suma con el numero eliminado
	cout << "La suma final es: " << suma << endl;
	return 0;
}
