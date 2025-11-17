//Chillagana Kevin
//Tarjeta Metro/Bus Quito (recarga y pagos)
//Crea un programa en C++ que simule una tarjeta de transporte del Metro/Bus de Quito.

#include <iostream>
using namespace std;

void recarga (double &saldo, double monto){
    saldo += monto;//Se agrega el monto al saldo.
    cout << "Recarga exitosa. Saldo actual: $" << saldo << endl << "\n";
}

bool pagar(double &saldo,double tarifa){
    if(saldo >= tarifa){
        saldo -= tarifa;//Se descuenta el valor de la tarifa al saldo agregado.
        cout << "Pago exitoso. Saldo actual: $" << saldo << endl;
        return true;
    }
    cout << "Pago no procesado...." << endl;//Si supera la tarifa el pago no procesa.
    return false;
}

void mostrarEstado(double saldo, int pasadas){
    cout << "\n Pasadas realizadas: " << pasadas << endl;
    cout << "Saldo final: $" << saldo << endl;
}
int main() {
    double saldoInicial = 0;
    double monto;
    double tarifa;
    int pasadas = 0;

    cout << "===== TARJETA METRO/BUS QUITO=====\n" << endl;
    cout << "Saldo actual: $" << saldoInicial << endl;//Se inicia con un saldo de cero.

    // Recarga
    cout << "Ingrese el monto a recargar: ";
    cin >> monto;
    recarga(saldoInicial, monto);

    // Pago del primer pasaje.
    cout << "\n Pagando pasaje de: $";
    cin >> tarifa;

    int realizadas = 0;

    if(pagar(saldoInicial, tarifa)){
        realizadas = 1;
    }

    cout << "\nPasadas realizadas : ";
    cin >> pasadas;
    
    pasadas -= realizadas;// Resta la primera pasada ya realizada.

    // Pago adicional
    for(int i = 0; i < pasadas; i++){
    	cout << "\nPagando pasaje de $" << tarifa << " ..." << endl; 
        if(pagar(saldoInicial, tarifa)){
            realizadas++;
        } 
    }
    mostrarEstado(saldoInicial, realizadas);

    return 0;
}
