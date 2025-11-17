//Chillagana Kevin
//Factura con descuento
//9. Programa que lea el nombre del producto , precio unitario y cantidad.Aplique descuentos.
#include <iostream>
using namespace std;

void datosProducto(string &producto,double &precio,int &cantidad){//datos iniciales de la factura.
    cout<<"\nEl producto es:";
    cin>>producto;
    cout<<"El precio es: $"; 
    cin>>precio;
    cout<<"La cantidad es:";
    cin>>cantidad;
}

double subtotal(double precio,int cantidad){
    return precio*cantidad;//Calcular el subtotal sin descuento
}
    
double descuento(double precio, int cantidad){
    double sub = precio * cantidad;
    double desc = 0;
    // Descuento según cantidad
    if (cantidad == 2) {
        desc = sub * 0.10; // 10%
    } else if (cantidad >= 3) {
        desc = sub * 0.15; // 15%
    }
    // Descuento adicional si subtotal > 200
    if (sub > 200) {
        desc += sub * 0.05; // 5% adicional
    }
    return desc; //descuento total
}

void descuentoaplicado(double subtotal, double desc, double &total){
    total = subtotal - desc;
}

int main() {
    
    string producto;
    double precio;
    int cantidad;

    cout<<"==== FACTURA ===="<<endl;
    datosProducto(producto,precio,cantidad);

    double sub = subtotal(precio, cantidad);  // calcular subtotal
    double des = descuento(precio, cantidad); // calcular descuento
    double total;                            

    descuentoaplicado(sub, des, total);       // aplicar descuento al total
 

    cout<<"\nEl subtotal es: $"<< sub <<endl;
    cout<<"\nEl descuento es de: $"<< des <<endl;
    cout<<"\nEl total es: $"<< total <<endl;

    return 0;
}
