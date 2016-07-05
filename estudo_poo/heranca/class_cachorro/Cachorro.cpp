#include <iostream>
#include "Cachorro.hpp"
using namespace std;

Cachorro::Cachorro(const char *a_name, const char *a_owner) : Canis(a_name) {
     // Inicializando a parte Canis do cachorro.
    owner = new char[strlen(a_owner) + 1];
    strcpy(owner, a_owner);
}
