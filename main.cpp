#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Producto {
    string nombre;
    double precio;
    int cantidad;
};

// Devuelve la suma de precio * cantidad de todos los productos
double calcularSubtotal(const vector<Producto>& productos) {
    double subtotal = 0;
    for (int i = 0; i < productos.size(); i++) {
        subtotal += productos[i].precio * productos[i].cantidad;
    }
    return subtotal;
}

// Devuelve el descuento que corresponde al subtotal
double calcularDescuento(double subtotal) {
    double descuento = 0;
    for(int i = 5000; i < subtotal.size(); i++){
        descuento += subtotal * 0.10;
    }
    return descuento;
}

// Devuelve el impuesto que corresponde a la base
double calcularImpuesto(double base) {
    double impuesto = 0;
    for(int i = 0; i < base.size(); i++){
        impuesto += base * 0.13;
    }
    
    return impuesto;
}

int main() {
    vector<Producto> productos = {
        {"Teclado", 12500.0, 2},
        {"Mouse", 6500.0, 3},
        {"Cable HDMI", 3000.0, 4},
        {"Webcam", 18000.0, 1}
    };

    for (int i = 0; i < productos.size(); i++) {
        cout << productos[i].nombre << " x" << productos[i].cantidad
             << " = " << productos[i].precio * productos[i].cantidad << endl;
    }

    double subtotal = calcularSubtotal(productos);
    cout << "Subtotal: " << subtotal << endl;

// Devuelve el total
double calcularTotaL(double base) {
    total = 0;
    for (int i = 0; i < base.size(); i++){
        total += base + impuesto ;
    }
    // Luego imprime las lineas Descuento, Impuesto y Total.
    void mostrar( Descuento) {
        cout << Descuento << ": " << descuento << endl;
    }    
    return 0;
    void mostrar(Impuesto) {
        cout << Impuesto<< ": " << impuesto << endl;
}
    return 0;
}   
    void mostrar(Total) {
    cout << Total<< ": " << total<< endl;
}
    return 0;
    
}
