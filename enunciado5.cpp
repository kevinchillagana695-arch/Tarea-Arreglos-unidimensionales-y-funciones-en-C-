//Chillagana Kevin
//Funciones con parámetros por valor.
//Enunciado 5: Escriba un programa que almacene varios números en un arreglo 
//y multiplique el valor:
#include <iostream>
using namespace std;

// Función con parámetros por valor
void multiplicarArreglo(int arreglo[], int tamano, int multiplicador) {
    for (int i = 0; i < tamano; i++) {
        cout << arreglo[i] * multiplicador << " ";
    }
    cout << endl;
}

int main() {
    int numeros[5];
    int multiplo;

    for (int i = 0; i < 5; i++) {  // Ingreso de los datos
        cout << "Ingrese numero " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    // Ingreso del numero con el que se multiplica.
    cout << "Ingrese el numero multiplicador: ";
    cin >> multiplo;

    // Llamada a la función
    cout << "Resultado de la multiplicacion: ";
    multiplicarArreglo(numeros, 5, multiplo);

    // Mostrar arreglo original para comprobar que NO cambió
    cout << "Arreglo original : ";
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}
