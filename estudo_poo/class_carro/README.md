# Como criar e compilar classes corretamente em C++ / (C++ POO Layout)

O layout para programas C++ orientado a objetos é:

Definimos a classe em um arquivo .hpp ou .h

Como no código desta pasta esta o [Carro.hpp](https://github.com/AndersonFirmino/CPP-Learning/blob/master/estudo_poo/class_carro/Carro.hpp) com a definição da classe

Em outro arquivo com o nome da classe mas com a extensão .cpp
definimos os métodos desta classe. Como no [Carro.cpp](https://github.com/AndersonFirmino/CPP-Learning/blob/master/estudo_poo/class_carro/Carro.cpp)

Temos o arquivo [main.cpp](https://github.com/AndersonFirmino/CPP-Learning/blob/master/estudo_poo/class_carro/main.cpp) que executa o programa principal e nele fazemos a chamada ao arquivo Carro.hpp através do include.

```cpp
#include "Carro.hpp"
```

O segredo esta na hora de compilar. Temos que compilar a classe tambem e não só o arquivo main.

no terminal fazemos o seguinte comando

```bash
g++ -c Carro.cpp main.cpp -o nome_do_programa
# ou podemos tambem fazer
g++ Carro.cpp main.cpp
# ele vai gerar um a.out
```

Para executar basta usar este comando

```sh
./nome_do_programa
```


:coffee: :laughing: 
