#include <iostream>
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int num1 = 5;
    int num2 = 10;
    
    std::cout << "Valores originales: " << std::endl;
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;
    
    swap(num1, num2);
    
    std::cout << "Valores despues del intercambio: " << std::endl;
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;
    
    return 0;
}
