#include <iostream>
#include <list> // biblioteca list para trabalhar com listas.

using namespace std;

// Testando as possibilidades com o list.

int main(int argc, char const *argv[]) {
    list<int> aula;
    list<int>::iterator iterador;
    int tamanho = 10;

    for (int i = 0; i < tamanho; i++) {
        aula.push_back(i);
    }   


    // iterador = aula.begin();
    //
    // advance(iterador, 5);
    //
    // aula.insert(iterador, 7);

    cout << "Tamanho da lista: " << aula.size() << endl;

    //aula.sort(); // ordena a lista
    //aula.reverse(); // reverte a lista

    tamanho = aula.size();
    for (int i = 0; i < tamanho; i++) {
        cout << aula.front() << endl;
        aula.pop_front();
    }


    return 0;
}
