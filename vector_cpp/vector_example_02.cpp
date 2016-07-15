#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    vector<int> v;
    int data;

    cout << "Para encerrar a entrada de dados pressione crtl + d" << endl;

    do {
        cout << "Entre com um numero (" << v.size() << "): " << endl;
        cin >> data;
        cin.get();

        if (cin.good()) { // Verifica se a entrada foi correta.
            v.push_back(data);
        }
    } while(cin.good());

        cout << "primeiro elemento do vetor: " << v.front() << "\nUltimo elemento do vetor: " << v.back() << endl;

        for (int i = 0; i < v.size(); i++) {
            cout << "v[" << i << "] = " << v[i] << endl;
        }

        if (v.empty()) {
            cout << "O vetor esta vazio" << endl;
        } else {
            cout << "O vetor não esta vazio" << endl;
        }

        cin.get();



    return 0;
}
