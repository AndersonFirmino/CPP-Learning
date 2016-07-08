#include <iostream>

using namespace std;

struct Carro {
    string nome;
    string cor;
    int potencia;
    int velocidade_maxima;
};

int main(int argc, char const *argv[]) {

    Carro fusca;

    fusca.nome = "Tornado";
    fusca.cor = "preto";
    fusca.potencia = 500;
    fusca.velocidade_maxima = 500;

    cout << "Nome: " << fusca.nome << endl;
    cout << "Cor: " << fusca.cor << endl;
    cout << "Potencia: " << fusca.potencia << endl;
    cout << "Velocidade maxima: " << fusca.velocidade_maxima << endl;

    return 0;
}
