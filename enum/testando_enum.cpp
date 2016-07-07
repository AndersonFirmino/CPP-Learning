#include <iostream>

using namespace std;

/*
* enum são como as constantes defindas #define NUMERO = 0
* só aqui no caso temos um conjunto de valores inteiros representados
* por identificadores.
*/

int main(int argc, char const *argv[]) {

    enum armas {fuzil = 100, revolver=8, rifle=12, escopeta=1};

    armas armaSelecionada;

    armaSelecionada=fuzil;

    cout << armaSelecionada << endl;

    armaSelecionada = rifle;
    cout << armaSelecionada << endl;

    return 0;
}
