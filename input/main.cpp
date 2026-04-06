#include "iostream"

using namespace std;

int main(){
    string nombre;
    int edad;
    cout << "Escribe tu nombre: ";
    // Eliminar caracteres de nueva línea o cualquier espacio en blanco
    getline(cin >> ws, nombre);

    cout << "Ahora tu edad: ";
    cin >> edad;
    cout << nombre << " y tienes " << edad << " años" <<endl;
    return 0;
}