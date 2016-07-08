#include <iostream>
#include "Carro.hpp"

using namespace std;

int main(int argc, char const *argv[]) {
    Carro *car = new Carro(); // Desta forma o objeto não chama o destrutor a menos que chame ele com o delete
    //Carro car; // Desta forma o destrutor é chamado automaticamente.
    //car.acelerar();
    car->acelerar();
    delete car;
    return 0;
}
