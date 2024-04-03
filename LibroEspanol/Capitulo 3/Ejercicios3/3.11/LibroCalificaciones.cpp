/*
3.11 (Modificación de la clase LibroCaTificaciones) Modifique la clase LibroCalificaciones (figuras 3.11 a
3.12) de la siguiente manera:
a) Incluya un segundo miembro de datos string, que represente el nombre del instructor del curso.
b) Proporcione una función establecer para modificar el nombre del instructor, y una función obtener para
obtenerlo.
c) Modifique el constructor para especificar dos parámetros: uno para el nombre del curso y otro para el
nombre del instructor.
d) Modifique la función mostrarMensaje, de tal forma que primero imprima el mensaje de bienvenida y
el nombre del curso, y que después imprima "Este curso es presentado por: ", seguido del nombre
del instructor.

Use su clase modificada en un programa de prueba que demuestre las nuevas capacidades de la clase.

*/

#include <iostream>
#include "LibroCalificaciones.h"
using namespace std;

int main(){

    LibroCalificaciones N1("Fernando","Lic. Ponce");

    N1.mostrarMensaje();

    return 0;
}