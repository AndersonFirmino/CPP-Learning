#include <iostream>

using namespace std;

// Testando structs com arrays

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

    void inserir_valores(string st_nome, string st_cor, int in_potencia, int in_velocidade) {
        nome = st_nome;
        cor = st_cor;
        potencia = in_potencia;
        velocidade_maxima = in_velocidade;
    }
};

int main(int argc, char const *argv[]) {

    Carro *carros = new Carro[5];
    Carro car1, car2, car3;

    carros[0] = car1;
    carros[1] = car2;
    carros[3] = car3;

    carros[0].inserir_valores("fusca", "preto", 200, 300);
    carros[1].inserir_valores("bmw", "azul", 300, 500);
    carros[2].inserir_valores("ferrari", "preta", 500, 1000);

    for (int i = 0; i <= 2; i++) {
        carros[i].imprimir_valores();
    }

    return 0;
}
