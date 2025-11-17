
//Chillagana Kevin
//Cálculo del precio final de un producto
//Enunciado 0:Una tienda aplica descuentos a un producto antes de venderlo al cliente.
//Al precio base se le aplican dos tipos de descuentos:
#include <iostream>
using namespace std;

double calcularDescuento(double precio, double porcentaje) {
    return precio * porcentaje;  //Calculo del descuento
}

double calcularPrecioFinal(double precioBase, double porcPromo, double porcCliente) {
    double desPromo = calcularDescuento(precioBase, porcPromo);
    double desCliente = calcularDescuento(precioBase, porcCliente);

    double precioFinal = precioBase - desPromo - desCliente;//Se aplican los dos descuentos definidos
    return precioFinal;
}

int main() {

    double precioBase;
    double porcPromo = 0.15;      // 15%
    double porcCliente = 0.10;    // 10%

    cout << "Ingrese el precio base del producto: ";
    cin >> precioBase;

    double desPromo = calcularDescuento(precioBase, porcPromo);
    double desCliente = calcularDescuento(precioBase, porcCliente);
// Cálculo del precio final llamando a la función
    double precioFinal = calcularPrecioFinal(precioBase, porcPromo, porcCliente);

    cout << "Descuento por promocion (15%): $" << desPromo << endl;
    cout << "Descuento por cliente frecuente (10%): $" << desCliente << endl;
    cout << "Precio final del producto: $" << precioFinal << endl;

    return 0;
}
