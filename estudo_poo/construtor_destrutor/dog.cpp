#include <iostream>
using namespace std;


class Dog {
public:
    Dog();
    ~Dog();    
private:
    int age;
    int weight;
};

Dog::Dog() {
    age = 0;
    weight = 0;
    cout << "Construtor Dog foi chamado." << endl;
}

Dog::~Dog() {
    cout << "Destrutor Dog foi chamado." << endl;
}

int main(int argc, char const *argv[]) {
    Dog rex;
    return 0;
}
