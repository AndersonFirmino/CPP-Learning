#if !defined(ARRAY_SIZE)
    #define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))
#endif
#include <iostream>

using namespace std;

void somar(float *var, float valor);
void inicializar_vetor(float *vetor);


int main(int argc, char const *argv[]) {

    float numero = 0;
    float vetor[5];

    somar(&numero, 2);
    inicializar_vetor(vetor);
    for (int i = 0; i < (ARRAY_SIZE(vetor) -1) ; i++) {
        cout << vetor[i] << endl;
    }
    cout << "Valor na variavel numero: " << numero << endl;

    return 0;
}

void somar(float *var, float valor) {
    *var += valor;
}

void inicializar_vetor(float *vetor) {
    for (int i = 0; i < 4; i++) {
        vetor[i] = i;
    }
}
