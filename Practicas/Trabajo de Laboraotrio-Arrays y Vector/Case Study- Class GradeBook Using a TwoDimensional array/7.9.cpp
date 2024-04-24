#include <array>
#include "7.9.h"

using namespace std;

int main(){

    //arreglo bidimensional de los estudiantes
    array<array<int, GradeBook::tests>, GradeBook::students> grades{
        {{87,96,70},
        {86,87,99},
        {94,100,90},
        {100,81,82},
        {83,65,85},
        {78,87,65},
        {86,75,83},
        {91,94,100},
        {76,72,85},
        {87,93,73}}};

    GradeBook myGradeBook("CS101 Introduction to C++ Programming",grades);
    myGradeBook.displayMessage();
    myGradeBook.processGrades();



    return 0;
}