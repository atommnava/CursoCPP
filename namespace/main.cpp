#include <iostream>

namespace primero(){
    int x = 1;
}

namespace segundo(){
    int x = 2;
}

int main(){
    int x = 0;
    std::cout << "X = " << primero::x;
    return 0;
}