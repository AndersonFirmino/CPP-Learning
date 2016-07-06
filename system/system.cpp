#include <iostream>
#include <stdlib.h> // system esta dentro desta lib

// system da para rodar os comandos do sistema operacional.

using namespace std;


int main(int argc, char const *argv[]) {
    cout << "Rodando system";
    system("python -V");
    return 0;
}
