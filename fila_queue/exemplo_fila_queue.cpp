#include <iostream>
#include <queue> // lib para filas

using namespace std;


int main(int argc, char const *argv[]) {

    /*
    métodos basicos.
    empty
    size
    front
    back
    push
    pop
    */

    queue <string> cartas;

    cartas.push("rei de copas");
    cartas.push("rei de espadas");
    cartas.push("rei de ouros");
    cartas.push("rei de paus");

    cout << "tamanho da fila: " << cartas.size() << endl;

    cout << "Ultima carta: " << cartas.back() << endl;

    cout << "\n";

    while (!cartas.empty()) {
        cout << "carta da frente: " << cartas.front() << endl;
        cartas.pop();
    }

    return 0;
}
