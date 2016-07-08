#include <iostream>

using namespace std;

struct Carro {
    string nome;
    string cor;
    int potencia;
    int velocidade_maxima;

    void imprimir_valores() {
        cout << endl;
        cout << "Nome: " << nome << endl;
        cout << "Cor: " << cor << endl;
        cout << "Potencia: " << potencia << endl;
        cout << "Velocidade maxima: " << velocidade_maxima << endl;
    }

    void aumentar_velocidade_maxima(int velocidade) {
        if (velocidade <= -1) {
            cout << "Não é permitido velocidades negativas";
        } else if (velocidade >= velocidade_maxima) {
            cout << "Não é permitido tentar acelerar alem do possivel.";
        } else {
            velocidade_maxima = velocidade;
        }
    }
};

int main(int argc, char const *argv[]) {

    Carro fusca;

    fusca.nome = "Tornado";
    fusca.cor = "preto";
    fusca.potencia = 500;
    fusca.velocidade_maxima = 500;

    fusca.imprimir_valores();
    fusca.aumentar_velocidade_maxima(100);

    fusca.imprimir_valores();

    return 0;
}
