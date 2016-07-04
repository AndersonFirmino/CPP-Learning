#include <iostream>

using namespace std;


class Carro {
public:
    Carro();
    ~Carro();

    void acelerar();
    void frear();

private:
    int cor;
    int aceleracao;
};
