#include "iostream"

using namespace std;

int main(){
    int opcion = 0;
    cout << "\nElige un número del 1 al 3: ";
    cin >> opcion;
    switch (opcion){
        case 1:
            cout << "\nElegiste 1";
            break;
        case 2:
            cout << "\nElegiste 2";
            break;
        case 3:
            cout << "\nElegiste 3";
            break;
        default:
            cout << "\nElige un número válido: ";
            main();
    }

    return 0;
}