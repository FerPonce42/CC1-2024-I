/*
3.13 (Clase Factura) Cree una clase llamada Factura, que una ferretería podría utilizar para representar una
factura por un artículo vendido en la tienda. Una Factura debe incluir cuatro datos miembros: un número de
pieza (tipo string), la descripción de la pieza (tipo string), la cantidad de artículos de ese tipo que se van a comprar
(tipo int) y el precio por artículo (tipo int). [Noza: en los siguientes capítulos, utilizaremos números que contienen
puntos decimales (por ejemplo, 2.75), a los cuales se les conoce como valores de punto flotante, para representar
montos en dólares]. Su clase debe tener un constructor que inicialice los cuatro datos miembros. Un constructor
que recibe múltiples argumentos se define mediante la siguiente forma:

nombreClasel nombreTipol nombreParámetrol, nombreTipo2 nombreParámetro2,

Proporcione una función establecer y una función obtener para cada miembro de datos. Además, proporcione una
función miembro llamada obtenerMontoFactura, que calcule el monto de la factura (es decir, que multiplique la
cantidad por el precio por artículo) y después devuelva ese monto como un valor int. Si la cantidad no es positiva,
debe establecerse en O. Si el precio por artículo no es positivo, debe establecerse en 0. Escriba un programa de
prueba que demuestre las capacidades de la clase Factura.

*/

#include <iostream>
#include "Factura.h"
using namespace std;

int main() {
    Factura factura("001", "Martillo", 5, 100);

    cout << "Detalles de la factura: " << endl;
    cout << "Número de pieza: " << factura.obtenerNumeroDePieza() << endl;
    cout << "Descripción de la pieza: " << factura.obtenerDescripcionDePieza() << endl;
    cout << "Cantidad de artículos: " << factura.obtenerCantidadDeArticulos() << endl;
    cout << "Precio por artículo: " << factura.obtenerPrecioPorArticulo() << endl;
    cout << "Monto total de la factura: S/." << factura.obtenerMontoFactura() << endl;

    return 0;
} 