//Class GradeBook Using an array to Store Grades
#include <string>
#include <array>
#include <iostream>
#include <iomanip>

class GradeBook{

    public:
        //variable constante de estudiantes = 10
        static const size_t students{10};

        //constructor inicializa los privates.
        GradeBook(const std::string& name, const std::array<int,students>& gradesArray)
            :courseName{name},grades{gradesArray}{

        }
        //metodo para establecer nombre del curso.
        void setCourseName(const std::string& name){
            courseName=name;
        }

        //metodo para retornar el nombre del curso;
        const std::string& getCourseName() const{
            return courseName;
        }

        //Imprimir el mensaje de bienvenida por ventana:
        void displayMessage() const{
            //aprovecha en llamar al metodo para retornar el nombre del curso:
            std::cout<<"Welcome to the grade book for \n"<<getCourseName()<<"!"<<std::endl;
        }

        // realiza varias operaciones sobre los datos (ninguna modifica los datos)
        void processGrades() const{
            outputGrades();//arreglo de calificaciones de salida

            //Llamada al metodo para calcular la calificacion promedio
            std::cout<<std::setprecision(2)<<std::fixed;
            std::cout<<"\nClass average is "<<getAverage()<<std::endl;

            //Mas llamados de metodos
            std::cout<<"Lowest grade is "<<getMinimum()<<"\nHighest grade is "<<getMaximum()<<std::endl;

            outputBarChart(); //salida de grafico de barras   
        }

        //Encontrar la nota minima: 
        int getMinimum() const{

            int lowGrade{100};// Asume que la calificacion mas grande es 100????????
            //Para recorrer dentro del arreglo
            for (int grade : grades){
                //Si la nota es menor , se asigna a lowGrade
                if(grade<lowGrade){
                    lowGrade=grade;
                }
            }
            return lowGrade;
        }

        //Encontrar la nota maxima
        int getMaximum() const{
            int highGrade{0}; //LA CALIFICACION MAS ALTA ES 0???

            for(int grade:grades){
                if(grade>highGrade){
                    highGrade=grade;
                }
            }
            return highGrade;
        }

        //Determinar la nota promedio de la prueba
        double getAverage() const{
            int total{0};
            //suma las calificaciones del arreglo
            for (int grade : grades){
                total += grade;
            }
            //retorna el promedio de calificaciones p
            return static_cast<double>(total) / grades.size();
        }

        // gráfico de barras de salida que muestra la distribución de calificaciones
        void outputBarChart() const{
            std::cout<<"\nGrade distribution:"<<std::endl;
            // almacena la frecuencia de las calificaciones en cada rango de 10 calificaciones
            const size_t frecuencySize{11};
            std::array<unsigned int, frecuencySize> frecuency{};
            //Para cada grado, incrementa la frecuencia aprpiada
            for(int grade : grades){
                ++frecuency[grade/10];
            }
            //para cada frecuencia de calificacion imprime la barrita
            for(size_t count{0}; count < frecuencySize; ++count){
                // etiquetas de la barra de salida ("0-9:", ..., "90-99:", "100:")
                if(0 == count){
                    std::cout<<" 0-9: ";
                }
                else if(10 == count){
                    std::cout<<" 100: ";
                }
                else{
                    std::cout<<count * 10<<"-"<<(count*10)+9<<": ";
                }

                //Imprime los *
                for(unsigned int stars{0}; stars<frecuency[count]; ++stars){
                    std::cout<<'*';
                }

                std::cout<<std::endl;
            }
        }

        //genera el contenido para el arreglo de las calificaciones
        void outputGrades() const{
            std::cout<<"\nThe grades are:\n\n";
            //calificacion de cada estudiante
            for(size_t student{0}; student<grades.size(); ++student){
                std::cout<<"Student "<<std::setw(2)<<student+1<<": "<<std::setw(3)<<grades[student]<<std::endl;
            }
        }

    private:
        std::string courseName;
        std::array<int, students>grades;
};