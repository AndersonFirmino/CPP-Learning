#include <iostream>
#include "Carro.hpp"


using namespace std;

Carro::Carro(){
    cout << "contruindo o objeto" << endl;
}

Carro::~Carro() {
    cout << "destruindo o objeto" << endl;
}

void Carro::acelerar(){
    cout << "acelerando" << endl;
}

void Carro::frear() {
    cout << "Freando..." << endl;
}
