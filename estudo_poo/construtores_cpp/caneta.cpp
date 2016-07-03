#include <iostream>
using namespace std;
/*
* Exemplo de construtor
*/

class Caneta {
    string cor;
    int volume;
public:
    Caneta(string c, int v); //construtor
    int get_volume() {
        return volume;
    }
    string get_color() {
        return cor;
    }
};
// contrutor
Caneta::Caneta(string c, int v) {
    cor = c;
    volume = v;
}
/*
Esta forma abaixo, também é valida para criação de construtores.

class Caneta
{ string cor;
  int volume;
  ///////////////
  public:
    Caneta( string c, int v ) : cor(c), volume(v)
         {
         }
};
*/

int main(int argc, char const *argv[]) {
    Caneta pen("preta", 20); // instanciando o objeto com o contrutor.
    cout << "A cor da caneta e: " << pen.get_color() << endl;
    cout << "O volume da caneta e: " << pen.get_volume() << endl;
    return 0;
}
