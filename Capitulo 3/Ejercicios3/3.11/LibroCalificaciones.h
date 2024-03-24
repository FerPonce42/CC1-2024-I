#include <string>
#include <iostream>
using namespace std;

class LibroCalificaciones {
public:
    explicit LibroCalificaciones(string,string); // CONSTRUCTOR

    void establecerNombreCurso(string);
    string obtenerNombreCurso() const;
    void mostrarMensaje() const;

    void establecerNombreInstructor(string);
    string obtenerNombreInstructor() const;

private:
    string nombreCurso;
    string nombreInstructor; //DATO STRING NOMBRE DEL INSTRUCTOR
};

LibroCalificaciones::LibroCalificaciones(string nombre, string nombreinstruc)
    : nombreCurso(nombre), nombreInstructor(nombreinstruc) {
}
void LibroCalificaciones::establecerNombreCurso(string nombre) {
    nombreCurso = nombre;
}

string LibroCalificaciones::obtenerNombreCurso() const {
    return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const {
    cout << "Bienvenido al libro de calificaciones para \n" << obtenerNombreCurso() << "!"
    <<"\nEste curso es presentado por: "<<obtenerNombreInstructor()<< endl;
}

void LibroCalificaciones::establecerNombreInstructor(string nombreinstruc){
    nombreInstructor=nombreinstruc;
}
string LibroCalificaciones::obtenerNombreInstructor()const{
    return nombreInstructor;
}