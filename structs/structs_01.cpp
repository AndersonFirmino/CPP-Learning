#include <iostream>
using namespace std;

struct Pessoa{
    string nome;
    string sobrenome;
    int idade;
    string cpf;
};


int main(int argc, char const *argv[]) {
    Pessoa p, p2;
    p.nome = "Fulano";
    p.idade = 25;
    p.cpf = "234.234.234-90";

    p2.nome = "Ciclano";
    p2.idade = 30;

    cout << "O nome do Fulano eh: " + p.nome << endl;

    return 0;
}
