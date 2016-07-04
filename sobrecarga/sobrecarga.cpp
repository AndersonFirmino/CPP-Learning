#include <iostream>
using namespace std;

/*
Sobrecarga de funções é
quando temos varias funções com o mesmo
nome.

O compilador sabe diferencia estas funções olhando seus parametros.
Assim ele sabe qual função chamar analisando o que foi passado como parametro.
*/
int quad (int x) {
    return x * x;
}

float quad(float x) {
    return x * x;
}

int main(int argc, char const *argv[]) {
    cout << quad(2) << endl;
    cout << quad(2.5) << endl;
    return 0;
}
