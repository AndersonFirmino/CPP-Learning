#include <iostream>
#include <string>

using namespace std;


class Person {
private:
    string name;
    int height;
public:
    string getName() const;
    void setName(string);
    int getHeight() const;
    void setHeight(int);
};


string Person::getName() const {
    return name;
}

void Person::setName(string s) {
    if (s.length() == 0) {
        name = "Nenhum nome atribuido";
    } else {
        name = s;        
    }
}

int Person::getHeight() const {
    return height;
}

void Person::setHeight(int h) {
    if (h < 0) {
        height = 0;
    } else {
        height = h;
    }
}

void setValues(Person&);
void getValues(const Person&);

int main(int argc, char const *argv[]) {
    Person p1;
    setValues(p1);
    cout << "Informando dados sobre a pessoa:\n";
    cout << "================================\n";
    getValues(p1);
    return 0;
}

void setValues(Person& pers) {
    string str;
    int h;
    cout << "Informe o nome da pessoa: " << endl;
    getline(cin, str);
    pers.setName(str);
    cout << "Informe a altura em milímetros" << endl;
    cin >> h;
    cin.ignore();
    pers.setHeight(h);
}

void getValues(const Person& pers) {
    cout << "Nome da pessoa: " << pers.getName() << endl;
    cout << "Altura da pessoa em milimetros: " << pers.getHeight() << endl;
}
