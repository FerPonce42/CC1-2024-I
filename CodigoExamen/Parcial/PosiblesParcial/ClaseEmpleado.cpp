#include <iostream>
#include <string>
using namespace std;

class Empleado {
public:
    Empleado(string nombreEmpleado, string apellidoEmpleado, double salarioEmpleado) {
        nombre = nombreEmpleado;
        apellido = apellidoEmpleado;
        if (salarioEmpleado < 0) {
            salario = 0;
        } else {
            salario = salarioEmpleado;
        }
    }

    string obtenerNombre() const {
        return nombre;
    }

    void establecerNombre(string nuevoNombre) {
        nombre = nuevoNombre;
    }

    string obtenerApellido() const {
        return apellido;
    }

    void establecerApellido(string nuevoApellido) {
        apellido = nuevoApellido;
    }

    double obtenerSalario() const {
        return salario;
    }

    void establecerSalario(double nuevoSalario) {
        if (nuevoSalario < 0) {
            salario = 0;
        } else {
            salario = nuevoSalario;
        }
    }

private:
    string nombre;
    string apellido;
    double salario;
};

int main() {
    Empleado empleado1("Fernando", "Ponce", 400.32);
    cout << "Nombre: " << empleado1.obtenerNombre() << endl;
    cout << "Apellido: " << empleado1.obtenerApellido() << endl;
    cout << "Salario: S/. " << empleado1.obtenerSalario() << endl;
    return 0;
}
