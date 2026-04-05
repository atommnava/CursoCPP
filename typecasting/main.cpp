#include "iostream"

using namespace std;

int main(){
    // IMPLICITA - Automaticamente 
    int pi = 3.14;
    cout << pi << endl;
    // EXPLICITA - Prescede un valor con el nuevo tipo de 
                //dato dentro de un conjunto de parentesis
    double x = (int)3.14;
    cout << x << endl;

    char y = 100;
    cout << y << endl; // IMPLICITA≈
    cout << (char)100 << endl; // EXPLICITA
    return 0;
}