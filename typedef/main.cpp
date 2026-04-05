#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pair_list_t;
//typedef std::string text_t;
//typedef int numero_t;

using text_t = std::string;
using numero_t = int;

int main(){
    pair_list_t pair_list;
    text_t nombre = "Atom";
    numero_t edad = 21;

    std::cout << nombre << "  " << edad << std::endl;
}