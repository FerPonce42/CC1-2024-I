#include <array>
#include <string>
#include <iostream>
#include <iomanip>

class GradeBook{

    public:
        static const size_t students{10}; //#estudiantes
        static const size_t tests{3}; //#pruebas
        //Constructor, inicializa nombre del curso y arreglo de calificaciones
        GradeBook(const std::string& name, std::array<std::array<int,tests>,students>& gradesArray):
            courseName(name), grades(gradesArray){

            }

        //metodo para establecer el nombre
        void setCourseName(const std::string& name){
            courseName=name;
        }

        //metodo para retornar el nombre
        const std::string& getCourseName() const{
            return courseName;
        }

        //Imprimir mensaje de bienvenida 
        void displayMessage() const{
            std::cout<<"Welcome to the grade book for\n"<<getCourseName()<<"!"<<std::endl;
        }

        // realizar varias operaciones sobre los datos
        void processGrades() const{
            outputGrades();

            std::cout<<"\nLowest grade in the grade book is "<<getMinimum()
            <<"\nHighest grade in the grade book is "<<getMaximum()
            <<std::endl;

            outputBarChart();
        }

        //busca la calificacion minima del curso
        int getMinimum() const{
            int lowGrade{100};

            for(auto const& student : grades){
                for(auto const& grade : student){
                    if(grade<lowGrade){
                        lowGrade=grade;
                    }
                }
            }
            return lowGrade;
        }

        //busca la calificacion maxima del curso
        int getMaximum() const{
            int highGrade{0};
            
            for(auto const& student : grades){
                for(auto const& grade : student){
                    if(grade>highGrade){
                        highGrade=grade;
                    }
                }
            }
            return highGrade;
        }

        //DETERMINAR EL PROMEDIO DE LAS NOTAS/CALIFICACIONES
        double getAverage(const std::array<int,tests>& set0fGrades) const{
            int total{0};

            //suma de notas en el arreglo
            for(int grade : set0fGrades){
                total += grade;
            }

            return static_cast<double>(total)/set0fGrades.size();
        }
        
        //SALIDA GRAFICO DE BARRAS  DISTRIBUCION DE CALIFICACIONES
        void outputBarChart() const{
            std::cout<<"\nOverall grade distribution: "<<std::endl;
            //Almacena la frecuencia las calfiicaciones en un rango de 10
            const size_t frequencySize{11};
            std::array<unsigned int,frequencySize>frequency{};

            // para cada grado, incrementa la frecuencia apropiada
            for(auto const& student : grades){
                for(auto const& test : student){
                    ++frequency[test/10];
                }
            }

            // para cada frecuencia de calificación, imprima la barra en el gráfico
            for(size_t count{0}; count<frequencySize; ++count){
                // etiqueta de la barra de salida ("0-9:", ..., "90-99:", "100:")
                if(0 == count){
                    std::cout<<" 0-9: ";
                }
                else if(10 == count){
                    std::cout<<" 100: ";
                }
                else{
                    std::cout<<count*10<<"-"<<(count*10)+9<<": ";
                }
    
                //IMPRIMIR LOS *
                for(unsigned int stars{0}; stars<frequency[count]; ++stars){
                    std::cout<<'*';
                }
                std::cout<<std::endl;
            }
        }

        // genera el contenido del arreglo de calificaciones
        void outputGrades() const{
            std::cout<<"\nThe grades are:\n\n";
            std::cout<<"            ";//alinear columnas
            //enunciado de columnas:
            for(size_t test{0}; test<tests; ++test){
                std::cout<<"Test "<<test+1<<" ";
            }
            std::cout<<"Average"<<std::endl;

            //CREA FILAS -- y COLUMAS |
            for(size_t student{0}; student<grades.size(); ++student){
                std::cout<<"Student "<<std::setw(2)<<student+1;

                //genera calificaciones estudiantes:
                for(size_t test{0}; test<grades[student].size(); ++test){
                    std::cout<<std::setw(8)<<grades[student][test];
                }
                //Llama al metodo getAverage para el valor del estudiante
                //Promedio, pasar fila de calificaciones como argumento
                double average{getAverage(grades[student])};
                std::cout<<std::setw(9)<<std::setprecision(2)<<std::fixed<<average<<std::endl;
            }
        }

    private:
        std::string courseName; 
        std::array<std::array<int, tests>, students> grades; //Arreglo 2d








};