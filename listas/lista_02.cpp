#include <iostream>
#include <list> // biblioteca list para trabalhar com listas.

using namespace std;

// Testando as possibilidades com o list.
// testando o método eraser.

int main(int argc, char const *argv[]) {
    list<int> aula, teste;
    list<int>::iterator it;
    int tamanho = 10;

    for (int i = 0; i < 4; i++) {
        teste.push_front(i);
    }

    for (int i = 0; i < tamanho; i++) {
        aula.push_back(i);
    }

    it = aula.begin();
    advance(it, 3);
    aula.insert(it, 0);

    aula.erase(--it);

    //aula.clear(); // remove todos os elementos da fila.
    aula.merge(teste);

    cout << "Tamanho da lista: " << aula.size() << endl;

    tamanho = aula.size();
    for (int i = 0; i < tamanho; i++) {
        cout << aula.front() << endl;
        aula.pop_front();
    }


    return 0;
}
