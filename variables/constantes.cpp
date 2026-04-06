#include <iostream>

int main(){
    const double PI = 3.14159;
    const int vel_luz = 299792;
    double radio = 5432;
    double circunferencia = 2 * PI * radio;

    std::cout << circunferencia << " m\n";
    std::cout << vel_luz << " m/s";
    return 0;
}