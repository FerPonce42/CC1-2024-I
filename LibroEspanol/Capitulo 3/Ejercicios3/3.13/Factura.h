#include <string>
using namespace std;

class Factura{

public:
    explicit Factura(string numerodepieza, string descripciondepieza, int cantidaddearticulos, int preciodearticulo) {
        establecer(numerodepieza, descripciondepieza, cantidaddearticulos, preciodearticulo);
    }

    void establecer(string numerodepieza, string descripciondepieza, int cantidaddearticulos, int preciodearticulo) {
        nume_pieza = numerodepieza;
        desc_pieza = descripciondepieza;
        if (cantidaddearticulos < 0) {
            cant_articulos = 0;
        } else {
            cant_articulos = cantidaddearticulos;
        }
        if (preciodearticulo < 0) {
            precio_articulo = 0;
        } else {
            precio_articulo = preciodearticulo;
        }
    }

    string obtenerNumeroDePieza() const {
        return nume_pieza;
    }

    string obtenerDescripcionDePieza() const {
        return desc_pieza;
    }

    int obtenerCantidadDeArticulos() const {
        return cant_articulos;
    }

    int obtenerPrecioPorArticulo() const {
        return precio_articulo;
    }

    int obtenerMontoFactura() const {
        return cant_articulos * precio_articulo;
    }

private:
    string nume_pieza;
    string desc_pieza;
    int cant_articulos;
    int precio_articulo;

};