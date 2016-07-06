#include <iostream>
using namespace std;

/*
Sobrecarga de funções é
quando temos varias funções com o mesmo
nome.

O compilador sabe diferencia estas funções olhando seus parametros.
Assim ele sabe qual função chamar analisando o que foi passado como parametro.
*/
int soma(int x) {
    return x + 2;
}

int soma(int x, int y) {
    return x + x;
}

int main(int argc, char const *argv[]) {
    cout << soma(2) << endl;
    cout << soma(2, 2) << endl;
    return 0;
}
