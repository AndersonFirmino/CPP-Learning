#include <iostream>
#include <stack> // lib responsavel para se trabalhar com pilha.

using namespace std;

int main(int argc, char const *argv[]) {

    stack <string> cartas;
    string vazio;



    cartas.push("rei de copas");
    cartas.push("rei de espadas");
    cartas.push("rei de ouros");
    cartas.push("rei de paus");

    cout << "Tamanho da pilha: " << cartas.size() << endl;
    cout << "carta do do topo: " << cartas.top() << endl;

    cartas.pop();

    cout << "Tamanho da pilha: " << cartas.size() << endl;

    cout << "carta do do topo: " << cartas.top() << endl;

    vazio = cartas.empty() ? "sim":"nao";
    cout << "Pilha esta vazia: " << vazio << endl;

    // Esvaziando a pilha
    while (!cartas.empty()) {
        cartas.pop();
    }    

    cout << "Tamanho da pilha: " << cartas.size() << endl;

    return 0;
}
