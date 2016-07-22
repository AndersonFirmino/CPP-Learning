#include <iostream>


using namespace std;
namespace coder {
    string lang = "C++";
    void Imprimir();
}

void coder::Imprimir() {
    cout << "A linguagem é " << lang << endl;
}

int main(int argc, char const *argv[]) {
    coder::Imprimir();
    return 0;
}
