#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    int *p;
    int vetor[10];

    p = vetor; // poderia ser assim p = vetor
    p[0] = 10;
    p[3] = 30;

    for (int i = 0; i < 9; i++) {
        cout << "Endereço de memoria: " << *p << endl;
        p++;
    }


    return 0;
}
