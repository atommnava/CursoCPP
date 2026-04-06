#include "iostream"

using namespace std;

int main(){
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Eres mayor de edad";
    } else {
        if (edad < 18) {
            cout << "No eres mayor de edad";
        }
    }

    return 0;
}