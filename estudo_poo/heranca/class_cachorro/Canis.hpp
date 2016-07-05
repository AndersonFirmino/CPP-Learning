#ifndef CANIS_H
#define CANIS_H
class Canis {
public:
    Canis (const char *a_name);
    void speak();
protected:
    char *nome;
}
#endif
