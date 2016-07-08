#include <iostream>
#include <vector>

using namespace std;

// Testando o vector
// uma alternativa moderna aos Arrays.

int main(int argc, char const *argv[]) {
    vector<int> num, num2;


    cout << "Inserindo valores no vector" << endl;
    for (int i = 0; i <= 4; i++) {
        num.push_back(i);
    }

    for (int j = 5; j <= 10; j++) {
        num2.push_back(j);
    }
    // tambem podemos inserir elementos da forma classica exemplo abaixo:
    // num[0] = 2;
    // outra forma de inserir valores
    //no comeco
    // num1.insert(num.begin() + 0, valor);
    // ou no final
    //num1.insert(num.end() + 0, valor);

    /*
    temos os metodos
    pop_back() que vai remover os elementos
    o metodo empty() que verifica se esta vazio
    e o metodo
    clear() que zera o vector
    */

    //num.swap(num2); // troca os valores entre os dois vectors

    //cout << "Tamanho do vector: " << num.size() << endl;

    cout << "Primeiro valor de num: " << num.front() << endl;
    cout << "Ultimo valor de num: " << num.back() << endl;
    cout << "Valor do meio: " << num.at(num.size() / 2) << endl;

    for (int i = 0; i < num.size(); i++) {
        cout << num[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < num2.size(); i++) {
        cout << num2[i] << " ";
    }


    return 0;
}
