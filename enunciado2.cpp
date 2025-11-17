//Chillagana Kevin
//ingresar las calificaciones de 4 estudiantes, las almacene en un arreglo .
#include <iostream>
using namespace std;

void notasEstudiantes(double arreglo[],double tamano){
		cout<<"Las notas ingresadas son: ";
		for(int i=1;i<=tamano;i++){//Recorre el de notas registradas.
			cout<<arreglo[i]<<" ";	
		}
}
int main() {
	double nota[4];
	
	for(int i=1;i<5;i++){//Notas ingresadas
		cout<<"Ingrese la nota del estudiante "<<i<<":";
		cin>>nota[i];			
	}
	notasEstudiantes(nota,4);
	return 0;
}
