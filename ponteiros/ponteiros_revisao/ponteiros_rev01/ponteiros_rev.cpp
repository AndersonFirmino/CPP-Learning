#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    string veiculo = "BMW";
    string *pv;

    pv = &veiculo;

    cout << veiculo << endl;
    cout << pv << endl;

    *pv = "Moto";

    cout << veiculo << endl;

    return 0;
}
