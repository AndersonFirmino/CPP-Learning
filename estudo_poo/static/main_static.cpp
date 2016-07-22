#include <iostream>
#include "static.hpp"

using namespace std;

string Universidade::pais = "";

int main(int argc, char const *argv[]) {
    Universidade *univer = new Universidade();
    Universidade::pais = "Brasil";
    univer->numero_alunos = 10;
    
    cout << "Pais: " << Universidade::pais << endl;
    cout << "Alunos: " << univer->numero_alunos << endl;
    return 0;
}
