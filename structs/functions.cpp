/*
* Testando a possibilidade de criar funções em structs.
*/
#include <iostream>

using namespace std;

struct teste {
    void mensagem(string valor) {
        cout << "Esta é uma mensagem da função na struct: "  + valor << endl;
    }
};

int main(int argc, char const *argv[]) {
    teste t;
    if (argv[1] != NULL) {
        t.mensagem(argv[1]);
    } else {
        t.mensagem("Hey Link");
    }
    return 0;
}
