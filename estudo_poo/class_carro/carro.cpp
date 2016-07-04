#include "carro.hpp"

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
